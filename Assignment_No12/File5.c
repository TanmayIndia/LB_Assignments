#include<stdio.h>

int CountDiff(int iNo)
{
    int iEvnSum=0, iOddSum=0, iDiff=0, iDigit=0;

    while(iNo != 0)
    {
        iDigit= iNo%10;

        if(iDigit%2==0)
        {
            iEvnSum=iEvnSum+iDigit;
        }
        else
        {
            iOddSum=iOddSum+iDigit;
        }

        iNo=iNo/10;
    }

     iDiff=iEvnSum-iOddSum;

     return iDiff;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}