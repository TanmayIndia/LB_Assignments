#include<stdio.h>

int Multi(int iNo)
{
    int iProd = 1;
    int iDigit = 1;

    while(iNo > 0)
    {
        iDigit = iNo%10;
        if(iDigit != 0)
            iProd = iProd * iDigit;
        iNo = iNo /10;
    }
    return iProd;
}

int MultiR(int iNo)
{
    static int iProd = 1;
    int iDigit = 1;

    if(iNo > 0)
    {
        iDigit = iNo%10;
        if(iDigit != 0)
            iProd = iProd * iDigit;
        iNo = iNo /10;
        MultiR(iNo);
    }
    return iProd;
}

int main()
{
    int iVal = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iVal);

    iRet = MultiR(iVal);
    printf("The product of digits given value is : %d", iRet);

    return 0;
}