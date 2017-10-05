#include <stdio.h>
#include <stdbool.h>

int main(void){

        int number, right_digit;
        bool isNegative = false;
        char negative = '-';

        printf("Enter your number. \n");
        scanf("%i", &number);

        if(number < 0){
                isNegative = true;
                number = -number;
        }

        do {
                right_digit = number % 10;
                printf("%i", right_digit);
                number /= 10;
        } while (number != 0);

        if(isNegative)
                printf("%c", negative);

        printf("\n");
        return 0;
}

