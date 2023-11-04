#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt=0, iEvnSum=0, iOddSum=0;

    for(iCnt=0; iCnt < iLength; iCnt++)
    {
       if((Arr[iCnt]%2) == 0)
       {
        iEvnSum = iEvnSum + Arr[iCnt];
       }
       else
       {
        iOddSum = iOddSum + Arr[iCnt];
       }
    }
    return (iEvnSum-iOddSum);
}

int main()
{
    int iSize=0, iCnt=0, iRet =0 ;
    int *ptr = NULL;

    printf("Enter number of elements\n");
    scanf("%d", &iSize);

    ptr = (int *) malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements: \n", iSize);
    for(iCnt=0; iCnt<iSize; iCnt++ )
    {
        printf("\nEnter element %d  : ", (iCnt+1));
        scanf("%d",&ptr[iCnt]);
    }

    iRet=Difference(ptr, iSize);

    printf("Result is : %d", iRet);

    free(ptr);

    return 0;
}