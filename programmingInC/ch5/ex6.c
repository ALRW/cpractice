#include <stdio.h>
#include <stdbool.h>

int main(void){

        int input, number, right_digit, divisor;
        bool isNegative = false;

        printf("Enter your number... \n");
        scanf("%i", &number);

        if(number < 0){
                isNegative = true;
                number = -number;
                printf("minus");
        }

        if(number == 0){
                printf("zero\n");
        } else {
                for(divisor = 1; divisor <= number; divisor *= 10);
                do{
                        divisor /= 10;
                        printf("%d", number / divisor);
                        number %= divisor;
                }while(number);
        }
        printf("\n");
        return 0;
}

