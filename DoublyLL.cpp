//Doubly Linear cpp
#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node *next;
    struct node *prev;
};

template<class T>
class DoublyLL
{
    private:
        struct node<T> * first;
        int Count;

    public:
        DoublyLL();
        void InsertFirst(T no);
        void InsertLast(T no);
        void Display();
        int CountNode();
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(T no,int ipos);
        void DeleteAtPos(int ipos);
};

template<class T>
DoublyLL<T>::DoublyLL()
{
    first = NULL;
    Count = 0;
}

template<class T>
void DoublyLL<T>::InsertFirst(T no)
{
    struct node<T> * newn = NULL;
    newn = new struct node<T>;

    newn->data = no;
    newn->next= NULL;
    newn->prev = NULL;

    if(first == NULL)//Linked List is empty
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        (first)->prev = newn;
        first = newn;
    }
    Count++;
}

template<class T>
void DoublyLL<T>::InsertLast(T no)
{
    struct node<T> * newn = NULL;
    newn = new struct node<T>;
    struct node<T> * temp = first;

    newn->data = no;
    newn->next= NULL;
    newn->prev = NULL;

    if(first == NULL)//Linked List is empty
    {
        first = newn;
    }

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next=newn;
    newn->prev = temp;
    Count++;
}

template<class T>
void DoublyLL<T>::Display()
{
    cout<<"Contents of the Doubly Linear Linked List are: "<<"\n";
    struct node<T> * temp = first;//Xerox
    cout<<" NULL <=>";
    while(temp != NULL)
    {
        cout<< "|"<< temp->data<< "|<=>";
        temp = temp->next;
    }
    cout<<" NULL\n";
}

template<class T>
 int DoublyLL<T>::CountNode()
 {
     return Count;
 }

template<class T>
void DoublyLL<T>::DeleteFirst()
{
    if(first == NULL)//Empty Linked List
    {
        return; 
    }
    else if((first-> next == NULL) && (first-> prev == NULL))//Single Element
    {
        delete first;
        first = NULL;
    }
    else                                //More than one element
    {
        struct node<T> * temp = first;
        first = first->next;
        delete temp;
        first->prev = NULL;
    }
    Count--;
}

template<class T>
void DoublyLL<T>::DeleteLast()
{
     if(first == NULL)//Empty Linked List
    {
        return; 
    }
    else if((first-> next == NULL) && (first-> prev == NULL))//Single Element
    {
        delete first;
        first = NULL;
    }
    else
    {
        struct node<T> * temp = first;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    Count--;
}

template<class T>
void DoublyLL<T>::InsertAtPos(T no,int ipos)
{
    int iCnt = 0;
    if(ipos<1 || ipos>(Count+1))
    {
        cout<<"Invalid Position."<<"\n";
    }
    else if(ipos==1)
    {
        InsertFirst(no);
    }
    else if(ipos==(Count+1))
    {
        InsertLast(no);
    }
    else
    {
        struct node<T> * newn = NULL;
        newn = new struct node<T>;
        struct node<T> * temp = first;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        for(iCnt = 1; iCnt<(ipos-1); iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;

        Count++;
    }
}

template<class T>
void DoublyLL<T>::DeleteAtPos(int ipos)
{
    int iCnt = 0;
    if(ipos<1 || ipos>Count)
    {
        cout<<"Invalid Position\n";
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
       struct node<T> * temp = first;
        
        for(iCnt = 1; iCnt<ipos-1 ; iCnt++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
        Count--;
    }
}

int main()
{
    int iRet = 0;
    DoublyLL<float> obj;

    obj.InsertFirst(11.67);
    obj.InsertFirst(13.7);
    obj.InsertFirst(15.0);
    obj.InsertFirst(31.1);
    obj.InsertFirst(71.3);
    obj.InsertLast(561.9);
    obj.InsertLast(192.7);
    obj.InsertAtPos(54.00,3);

    iRet = obj.CountNode();

    cout<<"Number of elements in the Doubly Linear linked list are: "<<iRet<<"\n";

    obj.Display();

    obj.DeleteAtPos(5);

    iRet = obj.CountNode();

    cout<<"Number of elements in the Doubly Linear linked list are: "<<iRet<<"\n";

    obj.Display();
   
    return 0;
}