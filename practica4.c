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
	}
	while ((num = ssize_t read(cadena.txt,buf,3)) > 0){
		int caracter = write(cadena.txt,buf,num);
		if (caracter < 0){
			perror("Error en el write");
		}
	int close("cadena.txt")
	}
	printf(cadena.txt);

}


my_cmp(const arxiu1, const arxiu2){
	int f,g;
	f = open("arxiu1.txt", O_RDONLY);
	g = open("arxiu2.txt", O_RDONLY);
	if (f < 0 or g < 0){
		perror("Error en l'open");
	}
	
	while (
