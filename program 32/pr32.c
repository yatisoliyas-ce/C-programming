#include <stdio.h>
#include <string.h>
void reverseWord(char word[])
{
    int start = 0, end = strlen(word) - 1;

    while (start < end)
    {
        char temp = word[start];
        word[start] = word[end];
        word[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    FILE *fp;
    char ch, word[100];
    int index = 0;


    fp = fopen("Demo.txt", "w");

    if (fp == NULL)
    {
        printf("Error creating file.\n");
        return 1;
    }


    fprintf(fp, "Hello Yati this Side");
    fclose(fp);

    printf("Demo.txt created successfully.\n\n");


    fp = fopen("Demo.txt", "r");

    if (fp == NULL)
    {
        printf("Error: File could not be opened.\n");
        return 1;
    }

    printf("Reversed words:\n");

    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == ' ' || ch == '\t' || ch == '\n')
        {
            if (index > 0)
            {
                word[index] = '\0';
                reverseWord(word);
                printf("%s", word);
                index = 0;
            }
            putchar(ch);
        }
        else
        {
            if (index < sizeof(word) - 1)
            {
                word[index++] = ch;
            }
        }
    }
    if (index > 0)
    {
        word[index] = '\0';
        reverseWord(word);
        printf("%s", word);
    }
    fclose(fp);
    printf("this program is done by YATISOLIYA_25CE118");
    return 0;
}
