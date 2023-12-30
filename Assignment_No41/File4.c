#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

#define BLOCKSIZE 1024
int main()
{
    int Fd= 0, iSize = 0, Ret = 0;
    char Fname[30] = {'\0'};
    char Arr[BLOCKSIZE] = {'\0'};

    printf("Please enter file name\n");
    scanf("%s",Fname);

    Fd = open(Fname, O_RDONLY);

    if(Fd == -1)
    {
        printf("Error in opening file\n");
        return -1;
    }

    while((Ret = read(Fd,Arr,BLOCKSIZE)) != 0)
    {
        iSize = iSize + Ret;
    }

    printf("The file size is: %d\n", iSize);

    close(Fd);
    return 0;
}