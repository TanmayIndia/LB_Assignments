#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<io.h>

#define BLOCKSIZE 1024

int CountCapital(int File)
{
    int iRet =0, iCount =0, iCnt =0;
    char Arr[BLOCKSIZE] = {'\0'};
  
    while((iRet = read(File,Arr,1024)) != 0)
    {
      for(iCnt = 0; iCnt< iRet; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount++;
            }
        }
    }

    return iCount;
}

int main()
{
    char FileName[30];
    int iRet = 0, Fd =0;

    printf("Enter File name\n");
    scanf("%s", FileName);

    Fd = open(FileName, O_RDONLY);

    if(Fd == -1)
    {
        printf("Error while opening file\n");
        return -1;
    }

    iRet = CountCapital(Fd);

    printf("Number of capital characters are %d", iRet);
       
    close(Fd);

    return 0;
}