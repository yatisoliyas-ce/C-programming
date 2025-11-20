#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *summary = NULL;
    char input[1000];
    int total_length = 0;

    printf("Article Summary Manager\n");

    printf("Enter initial short summary: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;
    int initial_len = strlen(input);
    summary = (char*)calloc(initial_len + 1, sizeof(char));
    if (summary == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    strcpy(summary, input);
    total_length = initial_len;
    printf("\nStored summary (%d chars): %s\n\n", total_length, summary);

    printf("Want to add more text? (y/n): ");
    char choice;
    scanf(" %c", &choice);
    getchar();

    if (choice == 'y' || choice == 'Y') {
        printf("Enter additional text: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0;

        int new_length = total_length + strlen(input) + 1;
        summary = (char*)realloc(summary, new_length);

        if (summary == NULL) {
            printf("Reallocation failed!\n");
            return 1;
        }
        strcat(summary, input);
        total_length = strlen(summary);

        printf("\nUpdated summary (%d chars):\n%s\n", total_length, summary);
    }
    free(summary);
    printf("\nMemory freed successfully!\n");
    printf("this program is done by YATISOLIYA_25CE118");
    return 0;
}
