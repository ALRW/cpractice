#include <stdio.h>
#include <stdbool.h>

int main(void){

        int input, number, right_digit, divisor, output;
        bool isNegative = false;

        printf("Enter your number... \n");
        scanf("%i", &number);

        if(number < 0){
                isNegative = true;
                number = -number;
                printf("minus ");
        }

        if(number == 0){
                printf("zero\n");
        } else {
                for(divisor = 1; divisor <= number; divisor *= 10);
                do{
                        divisor /= 10;
                        output = number / divisor;
                        if(output == 1)
                                printf("one ");
                        else if(output == 2)
                                printf("two ");
                        else if(output == 3)
                                printf("three ");
                        else if(output == 4)
                                printf("four ");
                        else if(output == 5)
                                printf("five ");
                        else if(output == 6)
                                printf("six ");
                        else if(output == 7)
                                printf("seven ");
                        else if(output == 8)
                                printf("eight ");
                        else if(output == 9)
                                printf("nine ");
                        else if(output == 0)
                                printf("zero ");
                        else
                                printf("Error: bad divisor");
                        number %= divisor;
                }while(number);
        }
        printf("\n");
        return 0;
}

