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

void removeString(char source[], int pos, int len)
{
        int i;

        for(i = pos + len; source[i] != '\0'; ++i, ++pos)
                source[pos] = source[i];

        source[pos] = '\0';
}

void insertString(char origin[], char addition[], int index)
{
        char buffer[50];
        int ol = stringLength(origin), al = stringLength(addition), length = ol - index + 1;

        substring(origin, index, length, buffer);

        int bl = stringLength(buffer);

        for(int j = 0; j < al; ++j, ++index)
                origin[index] = addition[j];

        for(int i = 0; i < bl; ++i, ++index)
                origin[index] = buffer[i];

        origin[index] = '\0';
}

bool replaceString(char origin[], char s1[], char s2[])
{
        int index = findString(origin, s1);

        if(index > 0) {
                removeString(origin, index, stringLength(s1));
                insertString(origin, s2, index);
                return true;
        } else {
                return false;
        }
}

int main (void)
{
        int findString(const char input[], const char searchTerm[]), result;
        char source[] = "The wrong son";
        char test[] = "Hello ";
        char text[] = "1 two three";
        bool stillFound;

        removeString(source, 4, 6);

        printf("Remove String ---> %s\n\n", source);

        insertString(source, "per", 4);

        printf("Insert String ---> %s\n\n", source);

        result = findString("a chatterbox", "hat");

        printf("Find String ---> %i\n\n", result);

        replaceString(text, "1", "one");

        printf("Replace String ---> %s\n\n", text);

        char longText[] = "The cat sat on the mat";
        do
                stillFound = replaceString(longText, " ", "");
        while (stillFound);

        printf("looping with strings ---> %s\n\n", longText);

        return 0;
}

