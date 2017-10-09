#include <stdio.h>

long int x_to_the_n(int x, int n){
        int i = x;
        for(int z = 1; z < n; ++z)
                i *= x;

        return i;
}

int main (void){
        
        printf("%li", x_to_the_n(2, 3));

        return 0;
}

