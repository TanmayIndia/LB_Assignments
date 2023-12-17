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

int ReverseDigit(int iNo)
{
    int iRev = 0, iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo%10;
        iRev = (iRev*10)+iDigit;
        iNo= iNo/10;
    }
 return iRev;
}

void Reverse(PNODE Head)
{
    int iRet = 0;
    while(Head != NULL)
    {
        iRet = ReverseDigit(Head->Data);
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
    InsertFirst(&First,30);
    InsertFirst(&First,6);
    InsertFirst(&First,42);
    InsertFirst(&First,5);

    Reverse(First);
    return 0;
}