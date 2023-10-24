#include<stdio.h>

#define METER 1000

int KMtoMeter(int iKM)
{
    int iDistance = 0;

    if(iKM>=0)
    {   

       iDistance = iKM * METER;
    }

    return iDistance;
}

int main()
{
    int iValue=0, iMeter=0;

    printf("Enter distance\n");
    scanf("%d",&iValue);

    iMeter= KMtoMeter(iValue);

    printf("Distance in meter: %d \n",iMeter);

    return 0;
}
 
