#include <stdio.h>

int main(void){

        int x,y,z;

        printf("Factorials between 1 and 10\n\n");

        for(x = 1; x <= 10; ++x){

                for(y = 1, z = 1; y <= x; ++y){
                        z += y;
                }
                printf("%i\n", z);
        }
        return 0;
}

