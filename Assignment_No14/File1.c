#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iEvnFrequency=0, iCnt=0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        if((Arr[iCnt]%2) == 0)
        {
            iEvnFrequency++;
        }
    }
    return iEvnFrequency;
}
int main()
{
    int iValue=0, iRet=0, iCnt=0;
    int *ptr=NULL;

    printf("Ente number of elements\n");
    scanf("%d",&iValue);

    ptr = (int *)malloc(iValue*sizeof(int));

    if(ptr==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    for(iCnt=0; iCnt<iValue; iCnt++)
    {
        printf("\nEnter element at %d : ", (iCnt+1));
        scanf("%d",&ptr[iCnt]);
    }

    iRet = CountEven(ptr,iValue);

    printf("\nResult is: %d\n", iRet);

    free(ptr);

    return 0;
}