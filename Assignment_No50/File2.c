#include<stdio.h>

int MaxDigit(int iNo)
{
    int iMaxDigit = 0, iDigit = 0; 
   
    while(iNo > 0)
    {
        iDigit = (iNo % 10);
        if(iMaxDigit < iDigit)
            iMaxDigit = iDigit;
        iNo = (iNo/10);
    }
    return iMaxDigit;
}

int MaxDigitR(int iNo)
{
   static int iMaxDigit = 0; 
   int iDigit = 0; 
   
    if(iNo > 0)
    {
        iDigit = (iNo % 10);
        if(iMaxDigit < iDigit)
            iMaxDigit = iDigit;
        iNo = (iNo/10);
        MaxDigitR(iNo);
    }
    return iMaxDigit;
}

int main()
{   
    int iVal = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iVal);

    iRet = MaxDigitR(iVal);

    printf("The maximum digit in the given value : %d\n", iRet);

    return 0;
}