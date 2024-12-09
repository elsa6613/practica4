#include <fcntl.h>
#include <uistd.h>
#include <stdlib.h>
#include <stdio.h>

my_tee(const cadena){
	int f;
	char buf[3];
	f = open("cadena.txt", O_RDWR);
	if (f == "-1"){
		perror("Error en l'open");
	}else{
		while ((num = ssize_t read(cadena.txt,buf,3)) > 0){
			int caracter = write(cadena.txt,buf,num);
			if (caracter < 0){
				perror("Error en el write");
		}
	printf(cadena.txt);
	}
}


