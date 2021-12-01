
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *my_strlwr(char *src)
{
    while (*src != '\0')
    {
        if (*src > 'A' && *src <= 'Z')
        {
            *src += 32;
        }
        src++;
    }
    return src;
}

int max(int a[], char b[][50])
{
    int index = 0;
    int max = a[0];
    for (int i = 0; i < 1000; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            index = i;
        }
    }
    for (int i = 0; i < 1000; i++)
    {
        if (max == a[i])
        {
            if (strcmp(b[i], b[index]) > 0)
            {
                max = a[i];
                index = i;
            }
            else
            {
                continue;
            }
        }
    }
    return index;
}

int main()
{
    char s[30001];
    char words[30001][50];
    int count[30001] = {0};
    int n = 0;

    while (1)
    {
        if (fgets(s, 30001, stdin) == NULL)
        {
            break;
        }
        int p = 0;
        int q = 0;
        while (1)
        {
            while (!isalpha(s[p]) && s[p] != 0)
            {
                p++;
            }
            if (s[p] == 0)
            {
                break;
            }
            q = p + 1;
            while (isalpha(s[q]))
            {
                q++;
            }

            char word[100];
            strncpy(word, s + p, q - p);
            my_strlwr(word);
            word[q - p] = 0;
            p = q;

            int i;
            for (i = 0; i < n; i++)
            {
                if (strcmp(word, words[i]) == 0)
                {
                    count[i]++;
                    break;
                }
            }
            if (i >= n)
            {
                strcpy(words[n], word);
                count[n] = 1;
                n++;
            }
        }
    }

    for (int i = 1; i < n; i++)
    {
        char word[100];
        int c = count[i];
        strcpy(word, words[i]);

        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (strcmp(words[j], word) <= 0)
            {
                break;
            }
            strcpy(words[j + 1], words[j]);
            count[j + 1] = count[j];
        }
        strcpy(words[j + 1], word);
        count[j + 1] = c;
    }

    int index = max(count, words);

    printf("%s %d", words[index], count[index]);

    return 0;
}


