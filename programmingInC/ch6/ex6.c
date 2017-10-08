#include <stdio.h>


int main (void){
        int i, initial, current, next;

        initial = 0;
        current = 1;

        printf("%i\n", initial);
        printf("%i\n", current);

        for(i = 2; i < 15; ++i){
                next = initial + current;
                initial = current;
                current = next;
                printf("%i\n", next);
        }

        return 0;
}

