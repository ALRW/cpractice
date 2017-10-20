#include <stdio.h>

int stringLength(const char input[])
{
        int c = 0;
        while(input[c] != '\0')
                ++c;

        return c;
}

int main (void)
{
        void removeString(char input[], int pos, int len);
        char source[] = "The wrong son";

        removeString(source, 4,6);

        printf("%s\n", source);

        return 0;
}

void removeString(char input[], int pos, int len)
{
        int stringLength(const char input[]), length, i, j;
        char result[100];

        length = stringLength(input);
        for(i = 0, j = 0; i < length; ++i)
        {
                if(i >= pos && i <= pos + len)
                        continue;

                result[j] = input[j];
                ++j;
        }

        input = result;
}




