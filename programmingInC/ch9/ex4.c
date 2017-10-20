#include <stdio.h>

void substring(const char input[], int start, int length, char output[])
{
        for(int i = 0;i < length; ++start, ++i)
        {
                output[i] = input[start];
        }
}

int main (void)
{
        void substring(const char input[], int start, int length, char output[]);
        char result[50];

        substring("character", 4, 3, result);
        printf("%s\n", result);
}

