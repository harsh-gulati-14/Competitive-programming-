#include<stdio.h>
#include<sys/types.h> 
#include<sys/stat.h> 
#include<fcntl.h>
int main()
{
	 int fd;
	 char c1[]="FALL SEM 2021";
	 fd = creat("os2.txt", S_IREAD | S_IWRITE);
	 write(fd, &c1,sizeof(c1));
	 return 0;
}

