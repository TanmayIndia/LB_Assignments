#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt=0;

    for(iCnt=0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]%11==0))
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize=0, iCnt=0;
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

    Display(ptr, iSize);

    free(ptr);

    return 0;
}