#include<stdio.h>

int CountRange(int iNo)
{
    int iCount=0, iDigit=0, iFrequency=0;

    while(iNo != 0)
    {
        iDigit= iNo%10;

        if(iDigit>3 && iDigit<7)
        {
            iFrequency++;
        }
        iNo = iNo/10;
    }
    return iFrequency;
}

int main()
{
    int iValue=0, iRet=0;

    printf("Enter a number \n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d",iRet);

    return 0;
}