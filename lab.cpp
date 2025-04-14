#include <stdio.h>

int main() {
    int pin, choice, attempts = 0;
    float balance = 1000.0, amount;

    while (attempts < 3) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &pin);

        if (pin == 1234) {
            do {
                printf("\n--- ATM MENU ---\n");
                printf("1. Check Balance\n");
                printf("2. Deposit Money\n");
                printf("3. Withdraw Money\n");
                printf("4. Exit\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                if (choice == 1) {
                    printf("Your balance is: $%.2f\n", balance);
                } else if (choice == 2) {
                    printf("Enter amount to deposit: ");
                    scanf("%f", &amount);
                    balance += amount;
                    printf("Deposit successful. New balance: $%.2f\n", balance);
                } else if (choice == 3) {
                    printf("Enter amount to withdraw: ");
                    scanf("%f", &amount);
                    if (amount > balance) {
                        printf("Insufficient balance.\n");
                    } else {
                        balance -= amount;
                        printf("Withdrawal successful. New balance: $%.2f\n", balance);
                    }
                } else if (choice == 4) {
                    printf("Thank you for using the ATM. Goodbye!\n");
                } else {
                    printf("Invalid option. Try again.\n");
                }

            } while (choice != 4);
            break;
        } else {
            attempts++;
            printf("Wrong PIN. Attempts left: %d\n", 3 - attempts);
            if (attempts == 3) {
                printf("Too many incorrect attempts. Account locked.\n");
            }
        }
    }

    return 0;
}
