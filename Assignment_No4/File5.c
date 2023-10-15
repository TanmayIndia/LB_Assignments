//Write a program which accept number from user and return difference between summation of all its factors and non-factors
#include<stdio.h>

int FactDiff(int iNo)
{
    int iSumFact=0, iSumNonFact=0, iDiff=0, iCnt=0;
    
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSumFact=iSumFact+iCnt;
        }
        else if((iNo%iCnt)!=0)
        {
            iSumNonFact=iSumNonFact+iCnt;
        }
    }

    iDiff=iSumFact-iSumNonFact;

    return iDiff;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    
    printf("%d",iRet);

    return 0;
}
