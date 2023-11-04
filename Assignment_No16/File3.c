#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt=0, iMin=Arr[0], iMax=Arr[0];

     for(iCnt=0; iCnt<iLength; iCnt++)
     {
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
     }
     return (iMax-iMin);
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

    iRet = Difference(ptr,iSize);

    printf("The difference between maximum and minimum is %d.\n", iRet);

    free(ptr);
    
    return 0;
}