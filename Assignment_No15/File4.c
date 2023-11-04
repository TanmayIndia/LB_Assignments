#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iSize, int iStart, int iEnd)
{
    int iCnt=0;

    printf("Elements: ");
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        if((Arr[iCnt]>iStart) && (Arr[iCnt]<iEnd))
        {
            
            printf("%d\t", Arr[iCnt]);
        }
    }
}


int main()
{
    int iCnt=0, *ptr=NULL, iLength=0, iValue1=0 , iValue2=0, iRet=0;

    printf("Enter the number of elements\n");
    scanf("%d",&iLength);

    printf("Enter the starting point\t");
    scanf("%d",&iValue1);
    printf("\n");
   
    printf("Enter the ending point\t");
    scanf("%d",&iValue2);
    printf("\n");

    printf("Enter %d elements\n",iLength);

    ptr = (int *) malloc(iValue1*sizeof(int));

    if(ptr==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        printf("\nElement: %d\t",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    printf("\n");

    Range(ptr, iLength, iValue1, iValue2);
    
    free(ptr);

    return 0;
}