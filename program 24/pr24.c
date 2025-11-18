#include <stdio.h>

void inputString(char str[])
{
    printf("Enter note: ");
    getchar();
    fgets(str, 200, stdin);
    int i = 0;
    while (str[i] != '\0')
        {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
        i++;
    }
}

int length(char str[])
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

void reverse(char str[], char rev[])
{
    int len = length(str);
    int i;
    for (i = 0; i < len; i++)
        rev[i] = str[len - 1 - i];
    rev[len] = '\0';
}

int compare(char s1[], char s2[])
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
        {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return s1[i] - s2[i];
}

void copy(char src[], char dst[])
{
    int i = 0;
    while (src[i] != '\0')
        {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
}

void concatenate(char s1[], char s2[])
{
    int i = length(s1);
    int j = 0;
    while (s2[j] != '\0')
        {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
}

void toUpper(char str[])
{
    int i = 0;
    while (str[i] != '\0')
        {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        i++;
    }
}

void toLower(char str[])
{
    int i = 0;
    while (str[i] != '\0')
        {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
}

void capitalizeWords(char str[])
{
    int i = 0;


    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;

    while (str[i] != '\0')
        {
        if (str[i] == ' ')
        {
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
                str[i + 1] = str[i + 1] - 32;
        }
        i++;
    }
}

int main()
{
    char note1[200], note2[200], result[200];
    int choice;

    printf("SIMPLE NOTE TOOL FOR ALEX\n");

    while (1)
        {
        printf("\nMENU:\n");
        printf("1. Length of Note\n");
        printf("2. Reverse Note\n");
        printf("3. Compare Two Notes\n");
        printf("4. Copy Note\n");
        printf("5. Concatenate Notes\n");
        printf("6. Convert to UPPERCASE\n");
        printf("7. Convert to lowercase\n");
        printf("8. Capitalize Each Word\n");
        printf("9. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                inputString(note1);
                printf("Length = %d\n", length(note1));
                break;

            case 2:
                inputString(note1);
                reverse(note1, result);
                printf("Reversed Note: %s\n", result);
                break;

            case 3:
                printf("Enter first note:\n");
                inputString(note1);
                printf("Enter second note:\n");
                inputString(note2);

                if (compare(note1, note2) == 0)
                    printf("Notes are SAME.\n");
                else
                    printf("Notes are DIFFERENT.\n");
                break;

            case 4:
                inputString(note1);
                copy(note1, result);
                printf("Copied Note: %s\n", result);
                break;

            case 5:
                printf("Enter first note:\n");
                inputString(note1);
                printf("Enter second note to add:\n");
                inputString(note2);
                concatenate(note1, note2);
                printf("Merged Note: %s\n", note1);
                break;

            case 6:
                inputString(note1);
                toUpper(note1);
                printf("Uppercase Note: %s\n", note1);
                break;

            case 7:
                inputString(note1);
                toLower(note1);
                printf("Lowercase Note: %s\n", note1);
                break;

            case 8:
                inputString(note1);
                capitalizeWords(note1);
                printf("Capitalized Note: %s\n", note1);
                break;

            case 9:
                printf("Exiting\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
