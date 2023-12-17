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

int AdditionEven(PNODE Head)
{
    int iValue = 0;
    while(Head != NULL)
    {
        if(Head->Data % 2 == 0)
        {
            iValue = iValue + Head->Data;
        }
      Head = Head->Next;
    }

    return iValue;
}

int main()
{
    PNODE First = NULL;
    int iSum = 0;

    InsertFirst(&First,10);
    InsertFirst(&First,11);
    InsertFirst(&First,28);
    InsertFirst(&First,2);
    InsertFirst(&First,3);
    InsertFirst(&First,30);
    InsertFirst(&First,6);
    InsertFirst(&First,42);
    InsertFirst(&First,5);

    iSum = AdditionEven(First);

    printf("The sum of even elements is: %d", iSum);

    return 0;
}