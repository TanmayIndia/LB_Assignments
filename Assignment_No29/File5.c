#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
    struct node* Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

int Addition(PNODE Head)
{
    int iMin = Head->Data;

    while(Head != NULL)
    {
        if(iMin>Head->Data)
        {
            iMin = Head->Data;
        }
       Head = Head -> Next;
    }
  
   return iMin;
}

int main()
{
    PNODE First = NULL;
    int iValue = 0;

    InsertFirst(&First,10);
    InsertFirst(&First,11);
    InsertFirst(&First,20);
    InsertFirst(&First,30);
    InsertFirst(&First,42);
    InsertFirst(&First,5);

    iValue = Addition(First);

    printf("Smallest element of Linked List is %d\n", iValue);
    
    return 0;
}