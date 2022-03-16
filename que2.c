#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>


int main(){
	int fd,fd1,size;
	char read[50];
	
	fd=open("que2_read.txt",O_RDONLY | O_CREAT);
	fd1=open("que2_write.txt",O_WRONLY);
	
	size=read(fd,read,20);
	
	if(write(fd1,read,strlen(read))==-1){
	printf("Error\n");
	exit(0);
	}
	
	else{
	printf("Length of string written %d\n",strlen(read));
	}
	return 0;
}

