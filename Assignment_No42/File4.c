#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<io.h>

#define BLOCKSIZE 1024

int CountChar(char FileName[], char ch)
{
    int iRet = 0, iCount = 0, iCnt = 0, Fd = 0;
    char Arr[BLOCKSIZE] = {'\0'};
  
    Fd = open(FileName, O_RDONLY);

    if(Fd == -1)
    {
        printf("Error while opening file\n");
        return -1;
    }

    while((iRet = read(Fd,Arr,BLOCKSIZE)) != 0)
    {
      for(iCnt = 0; iCnt< iRet; iCnt++)
        {
            if(Arr[iCnt] == ch)
            {
                iCount++;
            }
        }
    }
    close(Fd);
    return iCount;
}

int main()
{
    char FileName[30], cValue = '\0';
    int iRet = 0;

    printf("Enter File name\n");
    scanf("%s", FileName);

    printf("Enter the character \n");
    scanf(" %c",&cValue);

    iRet = CountChar(FileName,cValue);

    printf("Number of occurence of character %c is %d",cValue,iRet);

    return 0;
}