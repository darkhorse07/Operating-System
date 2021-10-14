#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<errno.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
int fd,fd1,n;
if(2!=argc)
{
printf("\n Usage \n");
return 1;
}
printf("Enter how many characters you want to read: ");
 scanf("%d",&n);
char buff[n]; 
fd = open(argv[1], O_RDONLY | O_CREAT,0777); 
fd1=read(fd,buff,n);
if(fd1==-1)
{
printf("error occured\n");
}
else
write(1,buff,n);
printf("\n");
}
