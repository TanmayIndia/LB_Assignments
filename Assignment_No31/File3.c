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

int ProdDigit(int iNo)
{
    int iProd = 1, iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit>0)
        {
           iProd = iProd*iDigit;
        }
        iNo= iNo/10;
    }
 return iProd;
}

void Reverse(PNODE Head)
{
    int iRet = 0;
    while(Head != NULL)
    {
        iRet = ProdDigit(Head->Data);
        printf("| %d |->", iRet);
        Head = Head -> Next;
    }
    printf(" NULL\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,105);
    InsertFirst(&First,113);
    InsertFirst(&First,28);
    InsertFirst(&First,303);
    InsertFirst(&First,62);
    InsertFirst(&First,442);
    InsertFirst(&First,51);

    Reverse(First);
    return 0;
}