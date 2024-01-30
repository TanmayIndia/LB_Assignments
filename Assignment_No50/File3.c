#include<stdio.h>

int CountSmallChar(char *charPtr)
{
    int iCnt = 0;

    while( *charPtr != '\0')
    {
        if((*charPtr >= 'a') && (*charPtr <= 'z'))
            iCnt++;
        charPtr++;
    }
    return iCnt;
}

int CountSmallCharR(char *charPtr)
{
    static int iCnt = 0;

    if( *charPtr != '\0')
    {
        if((*charPtr >= 'a') && (*charPtr <= 'z'))
            iCnt++;
        charPtr++;
        CountSmallCharR(charPtr);
    }
    return iCnt;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s", Arr);

    iRet = CountSmallCharR(Arr);

    printf("The number of white spaces in the string : %d", iRet);

    return 0;
}