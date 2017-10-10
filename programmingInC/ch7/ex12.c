#include <stdio.h>

void transposeMatrix(int arr1[4][5], int arr2[5][4]){

        for(int i = 0; i < 4; ++i)
                for(int j = 0; j < 5; ++j){
                        arr2[j][i] = arr1[i][j];
                }
}

int main (void){

        int arr1[4][5] = { 
                {1,2,3,4,5},
                {1,2,3,4,5},
                {1,2,3,4,5},
                {1,2,3,4,5}
        };
        int arr2[5][4] = { 
                {1,2,3,4},
                {1,2,3,4},
                {1,2,3,4},
                {1,2,3,4}, 
                {1,2,3,4}
        };

        transposeMatrix(arr1,arr2);

        for(int i = 0; i < 5; ++i){
                printf("\n");
                for(int j = 0; j < 4; ++j){
                        printf("%i ", arr2[i][j]);
                }
        }


        return 0;



}

