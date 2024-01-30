#include<stdio.h>

int Fact(int iNo)
{
    int iFactorial = 1;

    while(iNo > 0)
    {
        iFactorial = iFactorial * iNo;
        iNo--;
    }
    return iFactorial;
}

int FactR(int iNo)
{
    static int iFactorial = 1;

    if(iNo > 0)
    {
        iFactorial = iFactorial * iNo;
        iNo--;
        FactR(iNo);
    }
    return iFactorial;
}

int main()
{
    int iVal = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iVal);

    iRet = FactR(iVal);
    printf("The factorial of given value is : %d", iRet);

    return 0;
}