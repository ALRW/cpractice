#include <stdio.h>
#include <stdbool.h>

struct entry
{
        char word[15];
        char definition[50];
};

int compareStrings(const char s1[], const char s2[])
{
        int i = 0, answer;

        while(s1[i] == s2[i] && s1[i] != '\0')
                ++i;

        if(s1[i] < s2[i])
                answer = -1;
        else if(s1[i] == s2[i])
                answer = 0;
        else 
                answer = 1;

        return answer;
}

int lookup (const struct entry dictionary[], const char search[], const int entries)
{
        int low = 1;
        int high = entries -1;
        int mid, result;
        int compareStrings(const char s1[], const char s2[]);

        while(low <= high)
        {
                mid = (low + high) / 2;
                result = compareStrings(dictionary[mid].word, search);

                if( result == -1)
                        low = mid + 1;
                else if(result == 1)
                        high = mid - 1;
                else 
                        return mid;
        }

        return -1;
}

void swap(struct entry dictionary[], int n1, int n2)
{
        struct entry temp = dictionary[n1];
        dictionary[n1] = dictionary[n2];
        dictionary[n2] = temp;
}

int stringLength(const char input[])
{
        int c = 0;
        while(input[c] != '\0')
                ++c;

        return c;
}

// @return - true if entry 1 is less than entry 2
bool compare(struct entry e1, struct entry e2)
{
        int stringLength(const char input[]);
        int s1length = stringLength(e1.word);
        int s2length = stringLength(e2.word);
        int lower = (s1length <= s2length) ? s1length : s2length;
        bool result;
        for(int i = 0; i < lower;)
        {
                if(e1.word[i] == e2.word[i])
                        ++i;
                else if(e1.word[i] < e2.word[i]){
                        result = true;
                        break;
                }
                else {
                        result = false;
                        break;
                }
        }
        return result;
}

void dictionarySort(struct entry dictionary[], int length)
{



}

int main(void)
{
        const struct entry dictionary[100] = 
        {       {"aardvark", "a burrowing African mammal"},
                {"abyss", "a bottomless pit"},
                {"acument", "mentally sharp; keen"},
                {"addle", "to become confused"},
                {"aerie", "a high next"},
                {"affix", "to append; attach"},
                {"agar", "a jelly made from seaweed"},
                {"ahoy", "a nautical call of greeting"},
                {"aigrette", "an ornamental cluster of feathers"},
                {"ajar", "partially opened"}};

        int entries = 10;
        char word[15];
        int entry;
        int lookup(const struct entry dictionary[], const char search[], const int entries);

        printf("Enter word: ");
        scanf("%14s", word);

        entry = lookup(dictionary, word, entries);

        if(entry != -1)
                printf("%s\n", dictionary[entry].definition);
        else
                printf("Sorry, the word %s is not in my dictionary\n", word);

        return 0;
}

