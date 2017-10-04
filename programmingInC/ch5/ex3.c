#include <stdio.h>

int main(void){

        int number1, number2;

        printf("Enter the first number: \n");
        scanf("%i", &number1);

        printf("Enter the second number: \n");
        scanf("%i", &number2);

        if(number2 == 0)
                printf("Division by 0 not possible");
        else
                printf("Answer: %.3f", (float)number1 / number2);

        return 0;
}

