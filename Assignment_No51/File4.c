#include<stdio.h>

void Display(int iNo)
{
    char ch = 'A';
    int iCnt = 1;

    while(iCnt <=  iNo)
    {
        printf("%c\t", ch);
        ch++;
        iCnt++;
    }
}

void DisplayR(int iNo)
{
    static char ch = 'A';
    static int iCnt = 1;

    if(iCnt <=  iNo)
    {
        printf("%c\t", ch);
        ch++;
        iCnt++;
        DisplayR(iNo);
    }
}


int main()
{
    int iVal = 0;

    printf("Enter limit:\n");
    scanf("%d",&iVal);

    DisplayR(iVal);
    return 0;
}