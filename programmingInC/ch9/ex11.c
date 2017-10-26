#include <stdio.h>
#include <stdbool.h>

int stringLength(const char input[])
{
        int c = 0;
        while(input[c] != '\0')
                ++c;

        return c;
}

int strToInt(const char string[])
{
        int i, j, intValue, stringLength(const char input[]), result = 0;
        int len = stringLength(string);
        bool negative = false;
        char stringBuffer[100];

        if (string[0] == '-'){
                negative = true;
                for(j = 1; j <= len; ++j)
                        stringBuffer[j - 1] = string[j];
        } else 
                for(j = 0; j <= len; ++j)
                        stringBuffer[j] = string[j];

        for(i = 0; stringBuffer[i] >= '0' && stringBuffer[i] <= '9'; ++i)
        {
                intValue = stringBuffer[i] - '0';
                result = result * 10 + intValue;
        }

        (negative) ? result = -result : result;

        return result;
}

int main(void)
{
        int strToInt(const char string[]);
        printf("%i\n", strToInt("245"));
        printf("%i\n", strToInt("1234"));
        printf("%i\n", strToInt("-12345"));
        printf("%i\n", strToInt("-678"));

        return 0;
}

