#include<stdio.h>

void RangeDisplayEven(int iNo1, int iNo2)
{
    int iCnt=0;

    if(iNo1>iNo2)
    {
        printf("Invalid Range\n");
    }

    for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue1=0, iValue2=0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;   
}

