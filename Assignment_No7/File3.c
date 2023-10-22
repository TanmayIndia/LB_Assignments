#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt=0, iMulti=1;
    
    if(iNo<0)
    {
        iNo=-iNo;
    }
    if(iNo==0)
    {
        iMulti=1;
    }
    else
    {
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        iMulti=iMulti*iCnt;
    }
    }
    
    return iMulti;
}

int main()
{
    int iValue=0, iRet=0;
    
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("Factorial of %d is %d",iValue,iRet);

    return 0;
}