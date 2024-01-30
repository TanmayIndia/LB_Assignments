#include<stdio.h>

int Sum(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    while(iNo > 0)
    {
        iDigit = iNo%10;
        iSum = iSum + iDigit;
        iNo = iNo/10;
    }
    return iSum;
}

int SumR(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;

    if(iNo > 0)
    {
        iDigit = iNo%10;
        iSum = iSum + iDigit;
        iNo = iNo/10;
        SumR(iNo);
    }
    return iSum;
}

int main()
{
    int iVal = 0, iRet = 0;

    printf("Enter value...\n");
    scanf("%d",&iVal);

    iRet = SumR(iVal);
    printf("The sum of dogits: %d\n",iRet);
    return 0;
}