#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit=0;
    int iFrequencty = 0;
    
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo%10;
        
        if(iDigit==4)
        {
            iFrequencty++;
        }
        iNo=iNo/10;
    }
    return iFrequencty;
}


int main()
{
    int iValue=0;
    int bRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = CountFour(iValue);

    printf("%d",bRet);

    return 0;
}