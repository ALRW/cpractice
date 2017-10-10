#include <stdio.h>

float  absoluteValue (float x)
{
        if ( x < 0 )
                x = -x;
        return (x);
}

float  squareRoot (float x)
{
        const float  epsilon = .00001;
        float        guess   = 1.0;

        while  ( absoluteValue (guess * guess - x) >= epsilon )
                guess = ( x / guess + guess ) / 2.0;

        return guess;
}

int main (void){

        int a,b,c,disc;
        float res1, res2;

        printf("Time to solve a quadratic equation!\n");

        printf("What is the value of a?");
        scanf("%i", &a);
        printf("What is the value of b?");
        scanf("%i", &b);
        printf("What is the value of c?");
        scanf("%i", &c);

        disc = (b * b) - (4 * a * c);

        if(disc < 0) 
                printf("The roots to this quadratic equation are imaginary\n");
        else {
                res1 = (-b + (squareRoot(disc))) / 2 * a;
                res2 = (-b - (squareRoot(disc))) / 2 * a;
                printf("The roots to this quadratic equation are: %f and %f", res1, res2);

        }

        return 0;
}

