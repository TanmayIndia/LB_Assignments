#include<stdio.h>
#include<stdlib.h>

void DigitSum(int Arr[], int iLength)
{
    int iCnt=0, iSum=0, iNo=0;

     printf("Sum of digits of each element in it:\t");
        for(iCnt=0; iCnt<iLength; iCnt++)
        {
             iSum=0;
            while(Arr[iCnt] != 0)
            {
                iNo=Arr[iCnt]%10;
                iSum=iSum+iNo;
                Arr[iCnt]=Arr[iCnt]/10;
            }
            printf("%d\t", iSum);
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

    DigitSum(ptr,iSize);

    free(ptr);
    
    return 0;
}