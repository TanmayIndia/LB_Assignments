#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt=0;

     printf("Elements which contains 3 digits in it: ");
     for(iCnt=0; iCnt<iLength; iCnt++)
     {
        if(Arr[iCnt]>=100 && Arr[iCnt]<=999)
        {
            printf("%d\t", Arr[iCnt]);
        }
     }
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

    Digits(ptr,iSize);

    free(ptr);
    
    return 0;
}