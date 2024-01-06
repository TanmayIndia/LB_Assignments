// Singly Circular
#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node *next;
};

template<class T>
class SinglyCL
{
    private:
        struct node<T> * first;
        struct node<T> * last;
        int Count;

    public:
        SinglyCL();
        void InsertFirst(T no);
        void InsertLast(T no);
        void Display();
        int CountNode();
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(T,int ipos);
        void DeleteAtPos(int ipos);
};

template<class T>
SinglyCL<T>::SinglyCL()
{
    first = NULL;
    last = NULL;
    Count = 0;
}

template<class T>
void SinglyCL<T>::InsertFirst(T no)
{
    struct node<T> * newn = NULL;
    newn = new struct node<T>;

    newn->data = no;
    newn->next = NULL;

    if((first == NULL) && (last == NULL)) // Singly Circular LL is empty
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    last->next = newn;
    Count++;
}

template<class T>
void SinglyCL<T>::InsertLast(T no)
{
    struct node<T> * newn = NULL;
    newn = new struct node<T>;

    newn->data = no;
    newn->next = NULL;

    if((first == NULL) && (last == NULL))//Linked List is empty 
    {
        first = newn;
        last = newn;
        last->next = first;
    }
    else // Linked List contains at least one element
    {
        last->next = newn;
        last = newn;
        last->next = first;
    }
    Count++;
}

template<class T>
void SinglyCL<T>::Display()
{
    struct node<T> * temp = first;

    cout<<"NULL";
    
    if((first != NULL) && (last != NULL))
    {
        do
        {
            cout<<"|=>"<<temp->data;
            temp = temp->next;
        }while(temp != last->next);
        
    cout<<"=> NULL"<<"\n";
    }
}

template<class T>
int SinglyCL<T>::CountNode()
{
    return Count;
}

template<class T>
void SinglyCL<T>::DeleteFirst()
{
    struct node<T> * temp = first;

    if((first == NULL) && (last == NULL))// LL is empty
    {
        cout<<"Singly Circular Linked List is empty.\n";
    }
    else if(first == last)// Single element
    {
        delete first;
        first = NULL;
        last = NULL;
        Count--;
    }
    else
    {
        
        while(temp != last->next)
        {
            temp = temp->next;
        }
        first = temp->next;
        delete last->next;
        last->next = first;
        Count--;
    }
}

template<class T>
void SinglyCL<T>::DeleteLast()
{
    struct node<T> * temp = first;

    if((first == NULL) && (last == NULL))
    {
        cout<<"Singly Cicular Linked List is empty. \n";
    }
    else if(first == last)// Single element
    {
        delete first;
        first = NULL;
        last = NULL;
        Count--;
    }
    else
    {
        
        while(temp->next != last)
        {
            temp = temp->next;
        }
        delete last;
        last = temp;
        last->next= first;
         Count--;
    }
}

template<class T>
void SinglyCL<T>::InsertAtPos(T no,int ipos)
{
    int iCnt = 0;

    if(ipos<1 || ipos>(Count+1))
    {
        cout<<"Invalid position"<<"\n";
    }
    else if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == (Count+1))
    {
        InsertLast(no);
    }
    else
    {
        struct node<T> * newn = NULL;
        
        newn = new struct node<T>;
        newn->data = no;
        newn->next = NULL;
        
        struct node<T> * temp = first;
        
        for(iCnt = 1; iCnt<(ipos-1); iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;

    Count++;
    }
}

template<class T>
void SinglyCL<T>::DeleteAtPos(int ipos)
{
    int iCnt = 0;

    if(ipos<1 || ipos>Count)
    {
        cout<<"Invalid position."<<"\n";
    }
    else if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == Count)
    {
        DeleteLast();
    }
    else
    {
        struct node <T> * temp = first;
        struct node <T> * targetNode = first;
        for(iCnt = 1; iCnt< (ipos -1); iCnt++)
        {
            temp = temp->next;
        }
        targetNode = temp->next;
        temp->next = temp->next->next;
        delete targetNode;
        Count--;
    }
}

int main()
{
    SinglyCL <int>iobj;
    SinglyCL <float>fobj;
    SinglyCL <double>dobj;
    SinglyCL <char>cobj;

    iobj.InsertLast(11);
    iobj.InsertLast(21);
    iobj.InsertLast(51);
    iobj.InsertLast(101);

    cout<<"LinkedList of Integers : "<<"\n";
    iobj.Display();

    fobj.InsertLast(11.99);
    fobj.InsertLast(21.99);
    fobj.InsertLast(51.99);
    fobj.InsertLast(101.99);

    cout<<"LinkedList of Floats : "<<"\n";
    fobj.Display();

    dobj.InsertLast(11.9999);
    dobj.InsertLast(21.9999);
    dobj.InsertLast(51.9999);
    dobj.InsertLast(101.9999);

    cout<<"LinkedList of Doubles : "<<"\n";
    dobj.Display();

    cobj.InsertLast('A');
    cobj.InsertLast('B');
    cobj.InsertLast('C');
    cobj.InsertLast('D');

    cout<<"LinkedList of Characters : "<<"\n";
    cobj.Display();

    

    return 0;
}