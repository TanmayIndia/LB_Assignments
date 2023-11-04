#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iSize)
{
    int iCnt=0, iProd=0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        if((Arr[iCnt]%2) != 0)
        {
            if(iProd==0)
            {
                iProd= Arr[iCnt];
            }
            else
            {
                iProd= iProd * Arr[iCnt];
            }
        }
    }
    return iProd;
}

int main()
{
    int iCnt=0, *ptr=NULL, iLength=0,iRet=0;

    printf("Enter the number of elements\n");
    scanf("%d",&iLength);

    printf("Enter %d elements\n",iLength);

    ptr = (int *) malloc(iLength*sizeof(int));

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

    iRet= Product(ptr, iLength);
    
    printf("Product is : %d\n", iRet);

    free(ptr);

    return 0;
}