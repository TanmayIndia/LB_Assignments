// Doubly Circular
#include<iostream>
using namespace std;

template <class T>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

template <class T>
class DoublyCL
{
    private:
        struct node<T> *first;
        struct node<T> *last;
        int Count;

    public:
        DoublyCL();
        void InsertFirst(T no);
        void InsertLast(T no);
        void Display();
        int CountNode();
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(T no,int ipos);
        void DeleteAtPos(int ipos);
};

template <class T>
DoublyCL<T>::DoublyCL()
{
    first = NULL;
    last = NULL;
    Count = 0;
}

template <class T>
void DoublyCL<T>::InsertFirst(T no)
{
    struct node<T> *newn = NULL;
    newn = new struct node<T>;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

   if((first == NULL) && (last == NULL))
   {
    first = newn;
    last = newn;
   }
   else
   {
    newn->next = first;
    first->prev = newn;
    first= newn;
   }
   last->next = first;
   first->prev = last;
    Count++;
}

template <class T>
void DoublyCL<T>::InsertLast(T no)
{
   struct node<T> *newn = NULL;
   newn = new struct node<T>;
   newn->data = no;
   newn->next = NULL;
   newn->prev = NULL;

   if((first == NULL) && (last == NULL))
   {
    first = newn;
    last = newn;
   }
   else
   {
    newn->prev = last;
    last->next = newn;
    last = newn;
   }
   last->next = first;
   first->prev = last;
   Count++;
}

template <class T>
void DoublyCL<T>::Display()
{
    cout<<"Contents of the Doubly Circular Linked list are :"<<"\n";
    cout<<"NULL =>";
    struct node<T> *temp = first;
    do
    {
        cout<<"|"<<temp->data<<"| <=>";
        temp = temp->next;
    }while(temp != last->next);
    cout<<"NULL";
    cout<<"\n";
}

template <class T>
int DoublyCL<T>::CountNode()
{
    return Count;
}

template <class T>
void DoublyCL<T>::DeleteFirst()
{
    if((first == NULL) && (last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        first = first->next;
        delete last->next;
        first->prev = last;
        last->next = first; 
    }
    Count--;
}

template <class T>
void DoublyCL<T>::DeleteLast()
{
    if((first == NULL) && (last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        last = last->prev;
        delete last->next;
        last->next = first;
        first->prev = last;
    }
    Count--;
}

template <class T>
void DoublyCL<T>::InsertAtPos(T no,int ipos)
{
    int iCnt = 0;
    if(ipos<0 || ipos>Count+1)
    {
        cout<<"Invalid Position"<<"\n";
    }
    else if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == Count)
    {
        InsertLast(no);
    }
    else
    {
        struct node<T> *newn = new struct node<T>;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        struct node<T> *temp = first;

        for(iCnt = 1; iCnt< ipos-1 ; iCnt++)
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

template <class T>
void DoublyCL<T>::DeleteAtPos(int ipos)
{
    int iCnt = 0;
    if(ipos < 0 || ipos > Count)
    {
        cout<<"Invalid Position\n";
    }
    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == Count)
    {
        DeleteLast();
    }
    else
    {
        struct node<T> *temp = first;
        for(iCnt = 1; iCnt< ipos-1 ; iCnt++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        delete (temp->next->prev);
        temp->next->prev = temp;

        Count--;
    }

}

int main()
{
    DoublyCL<int> obj;
    int iRet = 0;
    
    obj.InsertFirst(12);
    obj.InsertFirst(13);
    obj.InsertFirst(14);
    obj.InsertFirst(11);
    obj.InsertFirst(10);
    obj.DeleteAtPos(4);
   // obj.DeleteFirst();
   // obj.InsertFirst(9);
    obj.InsertAtPos(15,4);
    obj.Display();

    iRet  = obj.CountNode();
    cout<<"The count of elements is: "<<iRet<<"\n";

    return 0;
}