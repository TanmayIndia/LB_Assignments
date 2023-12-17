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

int SmallDigit(int iNo)
{
    int iSmall = (iNo%10), iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iSmall>iDigit)
        {
            iSmall = iDigit;
        }
        iNo= iNo/10;
    }
 return iSmall;
}

void DisplaySmall(PNODE Head)
{
    int iRet = 0;
    while(Head != NULL)
    {
        iRet = SmallDigit(Head->Data);
        printf("| %d |->", iRet);   
        Head = Head -> Next;
    }
    printf(" NULL\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,10);
    InsertFirst(&First,11);
    InsertFirst(&First,28);
    InsertFirst(&First,303);
    InsertFirst(&First,6);
    InsertFirst(&First,42);
    InsertFirst(&First,5);

    DisplaySmall(First);
    return 0;
}