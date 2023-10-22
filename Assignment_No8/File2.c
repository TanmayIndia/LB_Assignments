#include<stdio.h>

int DollarToINR(int iNo)
{
    int iSum=0;
    const int DOLLAR = 70;
    
    if(iNo<0)
    {
        return iSum;
    }
    else
    {
        iSum=iNo*DOLLAR;
    }

    return iSum;
}

int main()
{
    int iValue=0, iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value of INR is %d",iRet);

    return 0;
}