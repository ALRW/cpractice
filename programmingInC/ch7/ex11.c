#include <stdio.h>

int arraySum(int a[], int n){
        int sum;
        for(int i = 0; i < n; ++i)
                sum += a[i];

        return sum;
}

int main(void){

        int array[5] = {1,2,3,4,5};

        printf("Sum of array [1,2,3,4,5] is: %i", arraySum(array, 5));

        return 0;
}

