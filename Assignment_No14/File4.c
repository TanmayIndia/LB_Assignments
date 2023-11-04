#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, iFrequency = 0;
  
    for(iCnt=0; iCnt<iLength ; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iSize = 0, iCnt=0, *ptr = NULL;
    int iRet = 0;

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

    iRet = Frequency(ptr,iSize);

    printf("Frequency of Eleven is %d.\n", iRet);
  
    free(ptr);
    
    return 0;
}