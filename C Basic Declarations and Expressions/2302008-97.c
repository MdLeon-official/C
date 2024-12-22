#include <stdio.h>

int main()
{
    long ctr_char, ctr_word, ctr_line;
    int c;
    int flag;

    ctr_char = 0;
    flag = ctr_line = ctr_word = 0;

    printf("Input a string and get number of charcters, words and lines:\n");

    while ((c = getchar()) != EOF)
    {
        ++ctr_char;

        if (c == ' ' || c == '\t')
        {
            flag = 0;
        }
        else if (c == '\n')
        {
            ++ctr_line;
            flag = 0;
        }
        else
        {
            if (flag == 0)
            {
                ++ctr_word;
            }
            flag = 1;
        }
    }

    printf("\nNumber of Characters = %ld\n", ctr_char);
    printf("\nNumber of words = %ld\n", ctr_word);
    printf("\nNumber of lines = %ld\n", ctr_line);

    return 0;
}
