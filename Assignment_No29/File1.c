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

int SearchFirstOcc(PNODE Head, int no)
{
    int iCnt = 1;
    BOOL bFlag = FALSE;

    while(Head != NULL)
    {
        if(Head->Data == no)
        {
            bFlag = TRUE;
            break;
        }
        else
        {
            Head = Head -> Next;
            iCnt++;
        }
    }
    
    if(bFlag)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
}

int main()
{
    PNODE First = NULL;
    int iValue = 0, iPos = 0;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,30);
    InsertFirst(&First,11);


    printf("Please enter number to search.\n");
    scanf("%d",&iValue);

    iPos = SearchFirstOcc(First,iValue);

    if(iPos != -1)
    {
        printf("Position of %d is %d\n", iValue, iPos);
    }
    else
    {
        printf("%d is not present in Linked List\n",iValue);
    }
        

    return 0;
}