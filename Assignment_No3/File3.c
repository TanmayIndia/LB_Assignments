//Write a program to accept number from and print even factors of that number
#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt=0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt < iNo; iCnt++)
    {
        if(iNo%iCnt ==0 )
        {
            if(iCnt%2==0)
            {
                printf("%d\t",iCnt);
            }
        }
    }

}
int main()
{
    int iValue=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}