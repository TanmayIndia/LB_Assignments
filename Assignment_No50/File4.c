#include<stdio.h>

int MinDigit(int iNo)
{
    int iMinDigit = (iNo%10), iDigit = 0; 
   
     if(iNo < 0)
    {
        iNo = -iNo;
    } 
   
   
    while(iNo > 0)
    {
        iDigit = (iNo % 10);
        if(iMinDigit > iDigit)
            iMinDigit = iDigit;
        iNo = (iNo/10);
    }
    return iMinDigit;
}

int MinDigitR(int iNo)
{
    static int iMinDigit = 9;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    } 
   
    if(iNo > 0)
    {
        iDigit = (iNo % 10);
        if(iMinDigit > iDigit)
        {
            iMinDigit = iDigit;
        }    
        iNo = (iNo/10);
        MinDigitR(iNo);
    }
 
    return iMinDigit;
}

int main()
{   
    int iVal = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iVal);

    iRet = MinDigitR(iVal);
    printf("The minimum digit in the given value : %d\n", iRet);
    return 0;
}