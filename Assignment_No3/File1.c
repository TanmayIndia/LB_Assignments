//Write a program which accept one number from user and print that number of even numbers on screen 
#include<stdio.h>

void PrintEven(int iNo)
{
    int iSize=1, iCnt=0;
    while(iSize <= iNo)
    {
        iCnt++;
        if(iCnt%2==0)
        {
            printf("%d\t",iCnt);
            iSize++;
        }
    }
}
int main()
{
    int iValue=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}