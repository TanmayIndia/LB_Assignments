#include<stdio.h>

void Display(int iNo)
{
    int iCnt = iNo;
    char ch = (char)(iNo + (char)64);

    while(iCnt > 0)
    {
        printf("%c\t", ch);
        ch--;
        iCnt--;
    }

}

void DisplayR(int iNo)
{
    static char ch = '\0';

    ch = (char)(iNo + (char)64);

    if(iNo > 0)
    {
        printf("%c\t", ch);
        ch--;
        iNo--;
        DisplayR(iNo);
    }

}

int main()
{
    int iVal = 0;

    printf("Enter Limit\n");
    scanf("%d",&iVal);

    DisplayR(iVal);

    return 0;
}