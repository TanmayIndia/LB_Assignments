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
    int iTotal = 0;

    while(Head != NULL)
    {
       iTotal = iTotal + Head->Data;
       Head = Head -> Next;
    }
  
   return iTotal;
}

int main()
{
    PNODE First = NULL;
    int iSum = 0;

    InsertFirst(&First,10);
    InsertFirst(&First,1);
    InsertFirst(&First,2);
    InsertFirst(&First,3);
    InsertFirst(&First,4);
    InsertFirst(&First,5);

    iSum = Addition(First);

    printf("Addition of all the elements in Linked List is %d\n", iSum);
    
    return 0;
}