#include <stdio.h>
#include <string.h>

union Book
{
    struct
    {
        int accessionNumber;
        char title[100];
        char author[100];
        float price;
        int issuedFlag;
    }
    details;
};

void inputBookDetails(union Book *book)
{
    printf("\n Enter Book Details \n\n");

    printf("Enter Accession Number: ");
    scanf("%d", &book->details.accessionNumber);
    getchar();

    printf("Enter Book Title: ");
    fgets(book->details.title, 100, stdin);
    book->details.title[strcspn(book->details.title, "\n")] = 0;

    printf("Enter Author Name: ");
    fgets(book->details.author, 100, stdin);
    book->details.author[strcspn(book->details.author, "\n")] = 0;

    printf("Enter Price: Rs. ");
    scanf("%f", &book->details.price);

    printf("Is the book issued? (1 for Issued, 0 for Available): ");
    scanf("%d", &book->details.issuedFlag);
}

void displayBookDetails(union Book book)
{
    printf("\nBook Details\n\n");
    printf("Accession Number: %d\n", book.details.accessionNumber);
    printf("Title: %s\n", book.details.title);
    printf("Author: %s\n", book.details.author);
    printf("Price: Rs. %.2f\n", book.details.price);

    if (book.details.issuedFlag == 1)
        {
        printf("Status: Issued\n");
    }
    else
        {
        printf("Status: Available\n");
    }
}
int main()
{
    union Book book;
    printf("CHARUSAT Library Book Management System\n");
    inputBookDetails(&book);
    displayBookDetails(book);
    return 0;
}
