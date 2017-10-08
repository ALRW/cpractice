#include <stdio.h>

int main (void){
        int i;
        float numbers[10], total, average;

        for(i = 0; i < 10; ++i){
                printf("Enter a floating-point number: ");
                scanf(" %f", &numbers[i]);
        }

        for(i = 0; i < 10; ++i)
                total += numbers[i];

        average = total / (sizeof(numbers) / sizeof(numbers[0]));

        printf("The average is %.2f. \n", average);

        return 0;

}

