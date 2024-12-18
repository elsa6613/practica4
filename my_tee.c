#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){
	int fd;
	char buf[1];

	fd = open(argv[1], O_CREAT | O_RDWR | O_TRUNC, 0644);
	if (fd == -1){
		perror("Error en l'open");
		exit(-1);
	}

	while ((read(STDIN_FILENO,buf,1)) > 0){
		if (write(STDOUT_FILENO, buf, 1) == -1){
			perror("Error en el write");
			exit(-1);
		}
		if (write(fd,buf,1) == -1){
			perror("Error en el write");
			exit(-1);
		}
	}
	close(fd);
}
