#include <stdio.h>

int main(void){

        double x = 3.31e-8;
        double y = 2.01e-7;
        double z = 7.16e-6;
        double w = 2.01e-8;

        printf("Answer = %e\n", (x * y) / (z * w));
        return 0;
}

