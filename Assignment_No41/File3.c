#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

#define BLOCKSIZE 1024
int main()
{
    int Ret = 0, Fd= 0;
    char Fname[30] = {'\0'};
    char Arr[BLOCKSIZE]  = {'\0'};

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
        printf("%s\n",Arr);
    }

    close(Fd); 

    return 0;
}