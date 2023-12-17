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

BOOL CheckPerfect(int iNo)
{
   int iCnt = 0, iSum = 0;
   
   for(iCnt = 1; iCnt<iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
            {
                iSum = iSum+iCnt;
            }
    }

   if(iSum == iNo)
    {
      return TRUE;
    }
   else
    {
      return FALSE;
    }
}

void DisplayPerfect(PNODE Head)
{
    BOOL bFlag = FALSE;

    printf("The perfect numbers are: \n");

    while(Head != NULL)
    {
        bFlag  = CheckPerfect(Head->Data);

        if(bFlag)
        {
            printf("%d\t",Head->Data);
        }
        Head = Head->Next;
    }
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

    DisplayPerfect(First);

    return 0;
}