#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<errno.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
int fd;
if(2!=argc)
{
printf("\n Usage \n");
return 1;
}
fd = open(argv[1], O_RDONLY | O_CREAT); 
if (fd < 0)  
{ 
   perror("c1"); 
} 
printf("opened the fd = % d\n", fd); 
if (close(fd) < 0)  
{ 
perror("c1"); 
}  
printf("closed the fd.\n"); 
} 
