#include <stdio.h>

int main(void){

        int i;
        printf("n     n^2\n---------\n");
        for(i = 1; i <= 10; ++i){
                printf("%2i     %i\n", i, i * i);
        }

        return 0;
}

