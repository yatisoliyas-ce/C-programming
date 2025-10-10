#include <stdio.h>

int main() {
    int balance = 5000;
    int withdraw_amount;
    char choice;

    printf("Welcome to National Bank of Bharat ATM!\n");
    printf("Your starting balance is: ₹%d\n\n", balance);

    do {
        printf("Enter amount to withdraw: ₹");
        int valid_input = scanf("%d", &withdraw_amount);


        if (valid_input != 1) {
            printf("Invalid input! Please enter a numeric amount.\n");
            while(getchar() != '\n');
            continue;
        }

        if (withdraw_amount <= 0) {
            printf("Invalid amount! Please enter a positive amount.\n");
        } else if (withdraw_amount > balance) {
            printf("Insufficient balance.\n");
        } else {
            balance -= withdraw_amount;
            printf("Withdrawal successful! Remaining balance: ₹%d\n", balance);
        }

        if (balance == 0) {
            printf("Your balance is zero. No further withdrawals allowed.\n");
            break;
        }


        printf("Do you want to make another withdrawal? (y/n): ");
        scanf(" %c", &choice);


        while(getchar() != '\n');

    } while (choice == 'y' || choice == 'Y');

    printf("Thank you for using National Bank of Bharat ATM. Have a nice day!\n");

    return 0;
}
