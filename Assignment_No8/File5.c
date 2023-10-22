#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt=0, iEvenFact=1, iOddFact=1, iFactDiff=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    
         
      //Calculating even Factorial
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2==0)
        {
            iEvenFact=iEvenFact*iCnt;
        }
    }
      //Calculating odd Factorial
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2!=0)
        {
            iOddFact=iOddFact*iCnt;
        }
    }
    
    iFactDiff = iEvenFact-iOddFact;

    return iFactDiff;
}

int main()
{
    int iValue=0, iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=EvenFactorial(iValue);

    printf("The difference between even factorial and factorial of %d is %d",iValue,iRet);

    return 0;
}