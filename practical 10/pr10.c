#include <stdio.h>

int main() {
    int choice;
    int total = 0;

    printf("Welcome to Foodies Restaurant\n");
    printf("Please select items from the menu below:\n");
    printf("---- Menu ----\n");
    printf("1. Burger        - Rs 150\n");
    printf("2. Pizza         - Rs 200\n");
    printf("3. Pasta         - Rs 120\n");
    printf("4. Sandwich      - Rs 100\n");
    printf("5. French Fries  - Rs 80\n");
    printf("Enter zero to complete the order\n");

menu:
    printf("Please select another item from the menu: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You ordered Burger. Your Sub-Total is Rs %d\n", total += 150);
            break;
        case 2:
            printf("You ordered Pizza. Your Sub-Total is Rs %d\n", total += 200);
            break;
        case 3:
            printf("You ordered Pasta. Your Sub-Total is Rs %d\n", total += 120);
            break;
        case 4:
            printf("You ordered Sandwich. Your Sub-Total is Rs %d\n", total += 100);
            break;
        case 5:
            printf("You ordered French Fries. Your Sub-Total is Rs %d\n", total += 80);
            break;
        case 0:
            printf("Your Order is Completed.\nYour Total Amount is: Rs %d\n", total);
            return 0;
        default:
            printf("Enter a valid option from the menu\n");
            break;
    }
    goto menu;

    return 0;
}

