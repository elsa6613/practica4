#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){
        int f,g;
	unsigned char buf1,buf2;
	int byte = 1;
	int linia = 1;
	ssize_t n1, n2;

        f = open(argv[1], O_RDONLY);
        if (f < 0){
                perror("Error en l'open");
                exit(-1);
        }

        g = open(argv[2], O_RDONLY);
        if (g < 0){
                perror("Error en l'open");
                exit(-1);
        }

        while ((n1 = read(f,&buf1,1)) > 0 && (n2 = read(g,&buf2,1)) > 0){
                if (buf1 != buf2){
			printf("byte %d,line %d\n",byte,linia);
			close(f);
            		close(g);
                }

        	if (buf1 == '\n'){
                	linia++;
        	}
        	byte++;
	}
	close(f);
        close(g);
}
