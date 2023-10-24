#include<stdio.h>

#define SQMETER 0.0929

double SquareMeter(int iFeet)
{
    double dSqMeter = 0.0f;

    if(iFeet>=0)
    {
        dSqMeter = (double)iFeet*SQMETER;
    }
    
    return dSqMeter;
}

int main()
{
    int  iValue=0;
    double dRet=0.0f;

    printf("Enter area in Square Feet\n");
    scanf("%d",&iValue);

    dRet=SquareMeter(iValue);

    printf("Area in Square Meter: %0.4lf", dRet);

    return 0;
}