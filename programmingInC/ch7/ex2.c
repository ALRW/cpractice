#include <stdio.h>

int calculateTriangularNumber (int n){

        int i, triangularNumber = 0;

        for (i = 1; i <= n; ++i)
                triangularNumber += 1;

        printf("TriangularNumber %i is %i\n", n, triangularNumber);

        return triangularNumber;
}

int main (void) {
        calculateTriangularNumber(10);
        calculateTriangularNumber(20);
        calculateTriangularNumber(50);

        return 0;
}

