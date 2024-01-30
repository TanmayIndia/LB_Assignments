#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 1;

    while(iCnt <= iNo)
    {
        printf("%d\t", iCnt);
        iCnt++;
    }
}

void DisplayR(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        printf("%d\t", iCnt);
        iCnt++;
        DisplayR(iNo);
    }
}

int main()
{
    int iVal = 0;

    printf("Enter number\n");
    scanf("%d",&iVal);

    DisplayR(iVal);
    return 0;
}