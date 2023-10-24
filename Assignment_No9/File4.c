#include<stdio.h>

double FtoCs(float fTemp)
{
    double dCelcius = 0.0f;

    dCelcius= (((double)fTemp-32.00) * (5.00/9.00));

    return dCelcius;
}

int main()
{
    float  fValue=0.0f;
    double dRet=0.0f;

    printf("Enter temparature in Fahrenheit\n");
    scanf("%f",&fValue);

    dRet=FtoCs(fValue);

    printf("Temparature in Celcius: %0.4lf", dRet);

    return 0;
}