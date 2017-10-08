#include <stdio.h>

int main (void){

        int P[150] = {0};

        int i, j, n;

        printf("Prime numbers between 1 and 150\n\n");

        for(i = 2, n = 150; i < n; ++i){
                if(P[i] == 0){
                        printf("%i ", i);
                        for(j = 1; j * i < n; ++j)
                                P[j * i] = 1;
                }
        }

        printf("\n");
        return 0;



}

