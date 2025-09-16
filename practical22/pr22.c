#include <stdio.h>

#define ROWS 5
#define SEATS 10

void displaySeatingChart(char seats[ROWS][SEATS])
{
    printf("\nSeating Chart:\n");
    for (int i = 0; i < ROWS; i++)
        {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < SEATS; j++)
            {
            printf("%c ", seats[i][j]);
        }
        printf("\n");
    }
}

int main() {
    char seats[ROWS][SEATS];
    int reservedCount, row, seat;


    for (int i = 0; i < ROWS; i++)
        {
        for (int j = 0; j < SEATS; j++)
        {
            seats[i][j] = 'O';
        }
    }

    printf("Enter the number of reserved seats: ");
    if (scanf("%d", &reservedCount) != 1 || reservedCount < 0 || reservedCount > ROWS * SEATS)
        {
        printf("Invalid number of reserved seats.\n");
        return 1;
    }

    for (int i = 0; i < reservedCount; i++)
        {
        printf("Enter row and seat number for reserved seat %d (e.g., 2 5): ", i + 1);
        if (scanf("%d %d", &row, &seat) != 2 || row < 1 || row > ROWS || seat < 1 || seat > SEATS)
            {
            printf("Invalid seat position. Please enter a row between 1 and %d and seat between 1 and %d.\n", ROWS, SEATS);
            i--;
            continue;
        }

        seats[row - 1][seat - 1] = 'X';
    }

    displaySeatingChart(seats);

    return 0;
}
