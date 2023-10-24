#include<stdio.h>



double RectangleArea(float fWidth, float fHeight)
{
    double dArea=0.0f;

    if(fWidth>=0.0 && fHeight>=0.0)
    {
        dArea= (double) fHeight*fWidth;
    }
    return dArea;
}

int main()
{
    float fValue1=0.0f, fValue2=0.0f;
    double dRet=0.0f;

    printf("Enter width\n");
    scanf("%f",&fValue1);

    printf("Enter height\n");
    scanf("%f",&fValue2);

    dRet=RectangleArea(fValue1,fValue2);

    printf("The area of Rectanlge %0.4lf",dRet);

    return 0;
}