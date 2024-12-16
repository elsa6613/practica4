#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void main(const arxiu1, const arxiu2){
        int f,g;
        f = open(arxiu1, O_RDONLY);
        if (f < 0){
                perror("Error en l'open");
                exit(-1);
        }

        g = open(arxiu2, O_RDONLY);
        if (g < 0){
                perror("Error en l'open");
                exit(-1);
        }

        int byte = 1;
        int linia = 1;
        while (ssize_t num1 = read(f,buf1,3)) > 0 && ssize_t num2 = read(g,buf2,3)) > 0){
                byte++;
                if (buf1 == '\n' && buf2 == '\n'){
                        linia++;
                }
        }
        if (buf1 != buf2){
                printf(byte,linia);
        }
        int close(f)
        int close(g)
}
