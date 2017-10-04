#include <stdio.h>

int main(void){

        int number1, number2;

        printf("Enter the first number: \n");
        scanf("%i", &number1);

        printf("Enter the second number: \n");
        scanf("%i", &number2);

        if(number1 % number2 == 0)
                printf("%i is divisible by %i", number1, number2);
        else
                printf("The numbers are not divisible");


        return 0;
}

