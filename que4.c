#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
	int fd,fd1,len,size;
	char write_buf[50]="Hi,Nice to meet you!";
	char read_buf[50];
	char copy[50];
	
	fd1=open("read.txt",O_RDONLY);
	size=read(fd1,copy,10);
	
	fd=open("file.txt",O_CREAT | O_RDWR,777);
	
	len=write(fd,write_buf,50);
	printf("Return %d values\n",len);
	lseek(fd1,4,SEEK_SET);
	lseek(fd1,2,SEEK_CUR);
	lseek(fd1,2,SEEK_END);
	read(fd1,copy,len);
	
	printf("\n%s \n",copy);
	close(fd);
	
	return 0;
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

