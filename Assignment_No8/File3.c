#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt=0, iFactorial=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    if(iNo>0)
    {
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2==0)
        {
            iFactorial=iFactorial*iCnt;
        }
    }
    }
    return iFactorial;
}

int main()
{
    int iValue=0, iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=EvenFactorial(iValue);

    printf("The even factorial of %d is %d",iValue,iRet);

    return 0;
}