#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int Multi=0;

    if((iNo1!=0) && (iNo2!=0) && (iNo3!=0))
       return Multi=(iNo1*iNo2*iNo3);
    
    else if((iNo1==0) && (iNo2==0))
        return Multi=iNo3;
    
    else if((iNo1==0) && (iNo3==0))
        return Multi=iNo2;

     else if((iNo2==0) && (iNo3==0))
        return Multi=iNo1;

     else if(iNo1==0)
        return Multi=(iNo2*iNo3);

    else if(iNo2==0)
        return Multi=(iNo1*iNo3);

    else if(iNo3==0)
        return Multi=(iNo1*iNo2);

    else 
        return 0;
}



int main()
{
    int iValue1=0, iValue2=0, iValue3=0, iRet=0, bRet=0;
    

    printf("Please enter three numbers\n");
    scanf("%d  %d %d", &iValue1, &iValue2, &iValue3);

    bRet=Multiply(iValue1,iValue2,iValue3);
    
    printf("The multiplication of given three numbers is: %d\n", bRet);

    return 0;
}


