//Queue
#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node * next;
};

template<class T>
class Queue
{
    private:
    struct node<T> * first;

    public:
    Queue();
    void Enqueue(T data);
    T Dequeue();
    void Display();
};

template<class T>
Queue<T>::Queue()
{
    first = NULL;
}

template<class T>
void Queue<T>::Enqueue(T no)//void InsertLast(PPNODE Head, int no)
{
    struct node<T> * newn = NULL;
    struct node<T> * temp = first;

    newn = new struct node<T>;
    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp->next = newn;
    }
}

template<class T>
T Queue<T>::Dequeue()//void DeleteFirst(PPNODE Head)
{
    T value = 0;
    struct node<T> * temp = first;

    if(first == NULL)
    {
        printf("QUEUE IS EMPTY..");
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
void Queue<T>::Display()
{
    struct node<T> * temp = first;
    cout<<"Elements of QUEUE are :"<<"\n";

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<"\n";
}

int main()
{
    Queue<float> obj;
    float iRet = 0.0;

    obj.Enqueue(11.2);
    obj.Enqueue(21.4);
    obj.Enqueue(51.4);
    obj.Enqueue(101.1);
    obj.Enqueue(111.5);
    
    obj.Display();

    iRet = obj.Dequeue();
    cout<<"Removed element from queue is :"<<iRet<<"\n";
    
    iRet = obj.Dequeue();
    cout<<"Removed element from queue is :"<<iRet<<"\n";
    
    return 0;
}