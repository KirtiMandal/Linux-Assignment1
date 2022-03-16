#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
	int fd,len;
	char write_buf[50]="Hi,Nice to meet you!";
	char read_buf[50];
	
	fd-open("try.txt",O_CREAT | O_RDWR,777);
	len=write(fd,write_buf,50);
	printf("Returning %d values from the file\n",len);
	
	lseek(fd,4,SEEK_SET);
	lseek(fd,2,SEEK_CUR);
	lseek(fd,2,SEEK_END);
	read(fd,read_buf,len);
	
	printf("Read buffer data is : %s \n",read_buf);
	close(fd);
	return 0;
}

