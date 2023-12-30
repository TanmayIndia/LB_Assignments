#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BLOCKSIZE 1024

int main()
{
    int Fd= 0, iSize = 0, Ret = 0;
    char Fname[30] = {'\0'};
    char Arr[BLOCKSIZE] = {'\0'};
    char str[] = "Hello World";

    printf("Please enter file name\n");
    scanf("%s",Fname);

    Fd = open(Fname, O_RDWR | O_APPEND);

    if(Fd == -1)
    {
        printf("Error in opening file\n");
        return -1;
    }

    Ret = write(Fd,str,strlen(str));

    if(Ret == -1)
    {
        printf("Error while writing into file\n");
    }

    close(Fd);
    return 0;
}