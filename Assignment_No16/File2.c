#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int iCnt=0, iMin=Arr[0];

     for(iCnt=0; iCnt<iLength; iCnt++)
     {
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
     }
     return iMin;
}

int main()
{
    int iSize=0, iRet=0, iCnt=0, *ptr=NULL;

    printf("Enter the number of elements\n");
    scanf("%d",&iSize);

    printf("Enter %d elements\n",iSize);

    ptr = (int *) malloc(iSize*sizeof(int));

    if(ptr==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("\nElement: %d\t",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    printf("\n");

    iRet = Minimum(ptr,iSize);

    printf("The minimum number is %d\n", iRet);

    free(ptr);

    return 0;
}