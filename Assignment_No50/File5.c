#include<stdio.h>

int Reverse(int iNo)
{
    int iRev = 0, iDigit = 0;

    while(iNo > 0)
    {
        iDigit = (iNo%10);
        iRev = ((iRev*10) + iDigit);
        iNo = iNo/10;
    }
    return iRev;
}

int ReverseR(int iNo)
{
    static int iRev = 0;
    int iDigit = 0;

    if(iNo > 0)
    {
        iDigit = (iNo%10);
        iRev = ((iRev*10) + iDigit);
        iNo = iNo/10;
        ReverseR(iNo);
    }
    return iRev;
}

int main()
{   
    int iVal = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iVal);

    iRet = ReverseR(iVal);
    printf("The reverse of original value : %d\n", iRet);

    return 0;
}