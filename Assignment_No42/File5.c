#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<io.h>

#define BLOCKSIZE 1024

void DisplayN(char FileName[], int iSize)
{
    int iRet = 0, iCount = 0, iCnt = 0, Fd = 0;
    char Arr[BLOCKSIZE] = {'\0'};
  
    Fd = open(FileName, O_RDONLY);

    if(Fd == -1)
    {
        printf("Error while opening file\n");
        exit(-1);
    }

    iRet = read(Fd,Arr,iSize);

    if(iRet == -1)
    {
        printf("Error while reading file\n");
        exit(-1);
    }

    printf("%s",Arr);

    close(Fd);
}

int main()
{
    char FileName[30];
    int iValue = 0;

    printf("Enter File name\n");
    scanf("%s", FileName);

    printf("Enter the character \n");
    scanf(" %d",&iValue);

    DisplayN(FileName,iValue);

    return 0;
}