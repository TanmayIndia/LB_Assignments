#include<stdio.h>

void RangeDisplayRev(int iNo1, int iNo2)
{
    int iCnt=0, iSum=0;

    if(iNo1>iNo2)
    {
        printf("Invalid Range\n");
    }

    for(iCnt=iNo2;iCnt>=iNo1;iCnt--)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1=0, iValue2=0, iRet=0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return 0;   
}

