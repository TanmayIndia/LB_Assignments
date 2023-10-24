#include<stdio.h>

int RangeSum(int iNo1, int iNo2)
{
    int iCnt=0, iSum=0;

    if(iNo1>iNo2)
    {
        printf("Invalid Range\n");
    }

    for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
    {
        iSum=iSum+iCnt;
    }

    return iSum;
}

int main()
{
    int iValue1=0, iValue2=0, iRet=0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("The sum of numbers between range: %d\n",iRet);

    return 0;   
}

