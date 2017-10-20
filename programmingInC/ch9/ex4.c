#include <stdio.h>

void substring(const char input[], int start, int length, char output[])
{
        int i;

        for(i = 0;i < length; ++start, ++i)
        {
                if(input[start] == '\0')
                        break;

                output[i] = input[start];
        }
        output[i] = '\0';
}

int main (void)
{
        void substring(const char input[], int start, int length, char output[]);
        char result[50], result2[50];


        substring("character", 4, 3, result);
        substring("two words", 4, 20, result2);
        printf("%s\n", result);
        printf("%s\n", result2);
}

