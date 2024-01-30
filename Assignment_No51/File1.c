#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    while(iCnt != iNo)
    {
        printf("*\t");
        iCnt++;
    }
}

void DisplayR(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        printf("*\t");
        iCnt++;
        DisplayR(iNo);
    }
}

int main()
{
    int iVal = 0;

    printf("Enter Value\n");
    scanf("%d",&iVal);

    DisplayR(iVal);
    return 0;
}