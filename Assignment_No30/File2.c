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

BOOL CheckPrime(int iNo)
{
   BOOL bFlag = FALSE;
   int iCnt = 0;
   
   for(iCnt = 2; iCnt<iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            bFlag = TRUE;
            break;
        }
    }

   return bFlag;
}

void DisplayPrime(PNODE Head)
{
    BOOL bFlag = FALSE;
    int iCnt = 0;

    printf("The Prime numbers are: \n");
    
    while(Head != NULL)
    {
       if(Head->Data == 2)
       {
          printf("%d\t",Head->Data);
       }
       else if(Head->Data > 2)
       {
          bFlag  = CheckPrime(Head->Data);
       }
       
       if(bFlag == FALSE && Head->Data > 2)
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
    InsertFirst(&First,2);
    InsertFirst(&First,3);
    InsertFirst(&First,30);
    InsertFirst(&First,6);
    InsertFirst(&First,42);
    InsertFirst(&First,5);

    DisplayPrime(First);

    return 0;
}