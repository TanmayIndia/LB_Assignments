#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo; //Updator
    }

    for(iCnt=1;iCnt<=10;iCnt++)
    {
        printf("%d\t",(iNo*iCnt));
    }
}
int main()
{
    int iValue=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}