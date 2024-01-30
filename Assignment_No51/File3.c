#include<stdio.h>

void Display(int iNo)
{
    int iCnt = iNo;

    while(iCnt > 0)
    {
        printf("%d\t", iCnt);
        iCnt--;
    }
}

void DisplayR(int iNo)
{
    if(iNo >= 1)
    {
        printf("%d\t",iNo);
        iNo--;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter value\n");
    scanf("%d",&iValue);

    DisplayR(iValue);
    return 0;
}