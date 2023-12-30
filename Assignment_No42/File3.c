#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<io.h>

#define BLOCKSIZE 1024

int CountWhite(char FileName[])
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
            if(Arr[iCnt] == ' ')
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
    char FileName[30];
    int iRet = 0;

    printf("Enter File name\n");
    scanf("%s", FileName);

    iRet = CountWhite(FileName);

    printf("Number of white spaces are %d", iRet);

    return 0;
}