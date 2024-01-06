//Stack
#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node *next;
};

template<class T>
class Stack
{
    private:
    struct node<T> * first;
    
    public:
    Stack();
    void Push(T no);
    T Pop();
    void Display();
};

template<class T>
Stack<T>::Stack()
{
    first= NULL;
}

template<class T>
void Stack<T>::Push(T no)
{
    struct node<T> * newn = NULL;

    newn = new struct node<T>;
    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
}

template<class T>
T Stack<T>::Pop()//void DeleteFirst(PPNODE Head)
{
    T value = 0;
    struct node<T> * temp = first;

    if(first == NULL)
    {
        printf("STACK IS EMPTY..");
    }
    else
    {
        value = first->data;
        first = first -> next;
        delete temp;
    }
        return value;
}

template<class T>
void Stack<T>::Display()
{
    struct node<T> * temp = first;//xerox
    cout<<"Elements of stack are :"<<"\n";

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|\n";
        temp = temp->next;
    }
}

int main()
{
    char cRet = '\0';
    Stack<char> obj;

    obj.Push('A');
    obj.Push('B');
    obj.Push('C');
    obj.Push('V');

    obj.Display();
    
    cRet = obj.Pop();
    cout<<"Poped element is :"<<cRet<<"\n";
    
    cRet = obj.Pop();
    cout<<"Poped element is :"<<cRet<<"\n";
   
    
    cRet = obj.Pop();
    cout<<"Poped element is :"<<cRet<<"\n";
   
    
    cRet = obj.Pop();
    cout<<"Poped element is :"<<cRet<<"\n";
   
    
    cRet = obj.Pop();
    cout<<"Poped element is :"<<cRet<<"\n";
    
    return 0;
}