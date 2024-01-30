#include<stdio.h>

int CountSpaces(char *charPtr)
{
    int iCnt = 0;

    while( *charPtr != '\0')
    {
        if(*charPtr == ' ')
            iCnt++;
        charPtr++;
    }
    return iCnt;
}

int CountSpacesR(char *charPtr)
{
    static int iCnt = 0;

    if( *charPtr != '\0')
    {
        if(*charPtr == ' ')
            iCnt++;
        charPtr++;
        CountSpacesR(charPtr);
    }
    return iCnt;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s", Arr);

    iRet = CountSpacesR(Arr);

    printf("The number of white spaces in the string : %d", iRet);

    return 0;
}