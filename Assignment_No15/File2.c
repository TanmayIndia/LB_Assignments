#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iSize, int iNo)
{
    int iCnt=0, iPos=-1;
   
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
           iPos = iCnt+1;
           break;
        }
    }
    return iPos;
}


int main()
{
    int iCnt=0, *ptr=NULL, iValue1=0, iValue2=0, iRet=0;
    

    printf("Enter the number of elements\n");
    scanf("%d",&iValue1);

    printf("Enter %d elements\n",iValue1);

    if(ptr==NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    ptr = (int *) malloc(iValue1*sizeof(int));

    for(iCnt=0; iCnt<iValue1; iCnt++)
    {
        printf("\nElement: %d\t",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    printf("\n");

    printf("Enter the value to check\n");
    scanf("%d",&iValue2);

    iRet = FirstOcc(ptr,iValue1,iValue2);

    if(iRet==-1)
    {
        printf("There is no such number.\n");
    }
    else
    {
        printf("The first occurence of number %d is %d",iValue2,iRet);
    }
    
    free(ptr);

    return 0;
}