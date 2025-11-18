#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_NAME 50


typedef struct
{
    char bookName[MAX_NAME];
    int isAvailable;
} Book;


Book library[MAX_BOOKS];
int totalBooks = 0;


void displayBooks()
{
    printf("\nList of Books\n");
    if (totalBooks == 0)
        {
        printf("No books in library.\n");
        return;
    }
    for (int i = 0; i < totalBooks; i++)
    {
        printf("%d. %s - %s\n", i + 1, library[i].bookName,
               library[i].isAvailable ? "Available" : "Borrowed");
    }
}


int getTotalBooks()
{
    return totalBooks;
}


void borrowBook(char* bookName)
{
    for (int i = 0; i < totalBooks; i++)
        {
        if (strcmp(library[i].bookName, bookName) == 0)
        {
            if (library[i].isAvailable == 1)
            {
                library[i].isAvailable = 0;
                printf("Book '%s' borrowed successfully!\n", bookName);
                return;
            }
            else
                {
                printf("Book '%s' is already borrowed.\n", bookName);
                return;
            }
        }
    }
    printf("Book '%s' not found in library.\n", bookName);
}


float calculateFine(int daysLate)
{
    float finePerDay = 2.0;
    return daysLate * finePerDay;
}


void addBook(char* bookName)
{
    if (totalBooks < MAX_BOOKS)
        {
        strcpy(library[totalBooks].bookName, bookName);
        library[totalBooks].isAvailable = 1;
        totalBooks++;
        printf("Book '%s' added successfully!\n", bookName);
    }
    else
    {
        printf("Library is full!\n");
    }
}


void returnBook(char* bookName)
{
    for (int i = 0; i < totalBooks; i++)
        {
        if (strcmp(library[i].bookName, bookName) == 0)
        {
            if (library[i].isAvailable == 0)
            {
                library[i].isAvailable = 1;
                printf("Book '%s' returned successfully!\n", bookName);
                return;
            }
           else
            {
                printf("Book '%s' was not borrowed.\n", bookName);
                return;
            }
        }
    }
    printf("Book '%s' not found in library.\n", bookName);
}

int main()
{
    int choice, days;
    char bookName[MAX_NAME];


    addBook("C Programming");
    addBook("Data Structures");
    addBook("Algorithms");
    addBook("Database Systems");

    while (1) {
        printf("\nLibrary Management System\n");
        printf("1. Display all books\n");
        printf("2. Get total number of books\n");
        printf("3. Borrow a book\n");
        printf("4. Return a book\n");
        printf("5. Calculate fine\n");
        printf("6. Add a book\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
            case 1:
                displayBooks();
                break;

            case 2:
                printf("Total books in library: %d\n", getTotalBooks());
                break;

            case 3:
                printf("Enter book name to borrow: ");
                fgets(bookName, MAX_NAME, stdin);
                bookName[strcspn(bookName, "\n")] = 0;
                borrowBook(bookName);
                break;

            case 4:
                printf("Enter book name to return: ");
                fgets(bookName, MAX_NAME, stdin);
                bookName[strcspn(bookName, "\n")] = 0;
                returnBook(bookName);
                break;

            case 5:
                printf("Enter number of days overdue: ");
                scanf("%d", &days);
                printf("Fine amount: Rs. %.2f\n", calculateFine(days));
                break;

            case 6:
                printf("Enter book name to add: ");
                fgets(bookName, MAX_NAME, stdin);
                bookName[strcspn(bookName, "\n")] = 0;
                addBook(bookName);
                break;

            case 7:
                printf("Thank you for using Library Management System!\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
