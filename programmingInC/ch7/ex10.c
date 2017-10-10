#include <stdio.h>
#include <stdbool.h>

int prime(int n)
{

        const int l = 100;
        int P[100] = {0};

        for(int i = 2; i < l; ++i){
                if(P[i] == 0)
                        for(int j = 1; j * i < l; ++j)
                                P[j * i] = 1;
        }

        if(P[n] == 0) 
                return 1;
        else 
                return 0;
}

int main (void){

        int i;

        printf("Run primes\n");
        printf("Enter a number between 0 and 100 to check if it is prime\n");
        scanf("%i", &i);

        if(i > 500 || i < 0)
                printf("You have entered an invalid number");
        else
                printf("Result: 1 for yes 0 for no: %i", prime(i));

        return 0;
}

