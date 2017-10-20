#include <stdio.h>
#include <stdbool.h>

int stringLength(const char input[])
{
        int c = 0;
        while(input[c] != '\0')
                ++c;

        return c;
}
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

bool compareStrings(const char s1[], const char s2[])
{
        int i = 0;
        bool answer = false;

        while(s1[1] == s2[i] && s1[i] != '\0')
                ++i;

        if(s1[i] < s2[i])
                answer = false;
        else if(s1[i] == s2[i])
                answer = true;
        else
                answer = false;

                return answer;
}

int findString(const char input[], const char searchTerm[])
{
        int stringLength(const char input[]), result = -1, i, j, length, searchLength;
        void substring(const char input[], int start, int length, char output[]);
        bool compareStrings(const char s1[], const char s2[]);
        char matchArray[50];

        length = stringLength(input);
        searchLength = stringLength(searchTerm);

        for(i = 0, j = 0; i < length; ++i)
        {
                if(input[i] == searchTerm[j])
                {
                        substring(input, i, searchLength, matchArray);
                        if(compareStrings(matchArray, searchTerm))
                        {
                                result = i;
                                break;
                        }
                }

        }
        return result;
}

int main (void)
{
        int findString(const char input[], const char searchTerm[]), result;

        result = findString("a chatterbox", "hat");

        printf("%i\n", result);

        return 0;
}

