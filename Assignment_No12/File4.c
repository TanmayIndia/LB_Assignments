#include<stdio.h>

int MultDigits(int iNo)
{
    int iMulti=1, iDigit=0;

    while(iNo != 0)
    {
        iDigit = iNo%10;

       if(iDigit!=0)
       {
        iMulti=iMulti*iDigit;
       }

        iNo=iNo/10;
    }
     return iMulti;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}