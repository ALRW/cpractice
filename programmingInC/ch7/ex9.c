#include <stdio.h>

int  gcd (int u, int v)
{
        int  temp;

        while ( v != 0 ) {
                temp = u % v;
                u = v;
                v = temp;
        }

        return u;
}

int lcm(int u, int v)
{
        return (u * v) / gcd(u, v);
}

int main (void)
{
        int u, v, result;

        printf("Calculate the least common multiple of two numbers\n");
        printf("---------------------------------------------------\n\n");
        printf("Enter the first number: \n");
        scanf("%i", &u);
        printf("Enter the second number: \n");
        scanf("%i", &v);

        printf("Least Common Multiple is: %i\n", result = lcm(u, v));

}

