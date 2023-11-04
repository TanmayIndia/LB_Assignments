#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iEvnF=0, iOddF = 0, iCnt = 0;

    for(iCnt=0; iCnt<iLength ; iCnt++)
    {
        if((Arr[iCnt]%2) == 0)
        {
            iEvnF++;
        }
        else
        {
            iOddF++;
        }
    }
    return(iEvnF - iOddF);
}

int main()
{
    int iSize = 0, iRet = 0, iCnt=0, *ptr = NULL;

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

    iRet = Frequency(ptr,iSize);

    printf("The difference between the frequencies is: %d \n", iRet);

    free(ptr);

    return 0;
}