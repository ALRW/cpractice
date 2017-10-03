#include <stdio.h>

int main(void){

        int nm1 = 365 + 7 - 365 % 7;
        int nm2 = 12258 + 23 - 12258 % 23;
        int nm3 = 996 + 4 - 996 % 4;

        printf("nm1: %i\n nm2: %i\n nm3: %i\n", nm1, nm2, nm3);

        return 0;
}

