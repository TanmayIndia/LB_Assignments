#include<stdio.h>

void Display(int iNo)
{
    while(iNo >= 1)
    {
        printf("%d\t*\t",iNo);
        iNo--;
    }
}

void DisplayR(int iNo)
{
    if(iNo >= 1)
    {
        printf("%d\t*\t",iNo);
        iNo--;
        DisplayR(iNo);
    }
}

int main()
{
    int iVal = 0;

    printf("Enter value...\n");
    scanf("%d",&iVal);

    DisplayR(iVal);
    return 0;
}