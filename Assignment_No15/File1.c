#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iSize, int iNo)
{
    int iCnt=0;
    BOOL bRet = FALSE;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bRet = TRUE;
        }
    }
    return bRet;
}


int main()
{
    int iCnt=0, *ptr = NULL, iValue=0, iValue2=0;
    BOOL bFlag= FALSE;

    printf("Enter the number of elements\n");
    scanf("%d",&iValue);

    printf("Enter %d elements\n",iValue);

    ptr = (int *) malloc(iValue*sizeof(int));
    
    if(ptr==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    for(iCnt=0; iCnt<iValue; iCnt++)
    {
        printf("\nElement: %d\t",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    printf("\n");

    printf("Enter the value to check\n");
    scanf("%d",&iValue2);

    bFlag = Check(ptr,iValue,iValue2);

    if(bFlag==TRUE)
    {
        printf("Given value %d is present.\n",iValue2);
    }
    else
    {
        printf("Given value %d is nnot present\n",iValue2);
    }
    
    free(ptr);

    return 0;
}