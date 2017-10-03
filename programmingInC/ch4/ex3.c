#include <stdio.h>

int main(void){

        int tri;

        printf("Triangular numbers between 5 and 50 \n\n");
        for(tri = 5; tri <= 50; tri += 5){
                printf("%2i\n", tri);
        }
        return 0;
}

