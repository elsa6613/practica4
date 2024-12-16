#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){
if (argc == 2){
open(argv[1], O_CREAT , -rw-r--r--);
fd = open(argv[1], O_RDWR);

if (fd == -1){
	perror("Error en l'open");
	exit(-1);
}
int buf;
size_t num = 1;
read(0,buf,num);

while (read == 1){
	printf(buf)
	ssize_t write(fd,buf,num)
	if (write < 0){
		perror("Error en el write");
		exit(-1);
	}
int close(f);



