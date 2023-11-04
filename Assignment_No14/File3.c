#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define  FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    for(iCnt=0; iCnt<iLength ; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bFlag=TRUE;
        }
    }
    return bFlag;
}

int main()
{
    int iSize = 0, iCnt=0, *ptr = NULL;
    BOOL bFlag = FALSE;

    printf("Enter the number of elements\n");
    scanf("%d", &iSize);

    ptr = (int *) malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n", iSize);

    for(iCnt=0; iCnt < iSize; iCnt++)
    {
        printf("\nElement: %d\t", iCnt+1);
        scanf("%d", &ptr[iCnt]);
    }
    printf("\n");

    bFlag = Check(ptr,iSize);

   if(bFlag==TRUE)
   {
    printf("Eleven is present.\n");
   }
   else
   {
    printf("Eleven is not present.\n");
   }

   free(ptr);

   return 0;
}