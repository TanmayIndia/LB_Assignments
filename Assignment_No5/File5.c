#include<stdio.h>

float Percent(int iObtained, int iTotal)
{
    float fPercent=0.0f;
    
    if((iTotal==0) && (iObtained==0))
       return 0;
    
   else if((iTotal==0) && (iObtained!=0))
       return fPercent=iObtained;
   
    else
        fPercent = (((float)iObtained/iTotal)*100.00f);

    return fPercent;
       
}



int main()
{
    int iValue1=0, iValue2=0;
    float fRet=0.0f;

    printf("Please enter total marks. \n");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks. \n");
    scanf("%d",&iValue2);

    fRet=Percent(iValue2,iValue1);
   
    printf("Percentage: %f %%\n",fRet);
    
    return 0;
}


