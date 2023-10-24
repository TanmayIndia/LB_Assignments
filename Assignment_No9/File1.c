#include<stdio.h>

#define PI 3.14

double CircleArea(float fRadius)
{
    double dArea = 0.0f;

    if(fRadius>=0.0)
    {
        dArea = (double)( 3.14 * fRadius * fRadius);
    }
             
    return dArea;
}

int main()
{
    float fValue=0.0f;
    double dRet=0.0f;

    printf("Enter radius\n");
    scanf("%f",&fValue);

    dRet= CircleArea(fValue);

    printf("The area of circle is %0.4lf", dRet);

    return 0;
}