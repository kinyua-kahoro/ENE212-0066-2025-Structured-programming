#include <stdio.h>
#include <stdbool.h>

float balance = 1000.00;
const int correctPIN = 1234;

bool login();
void showMenu();
void checkBalance();
void deposit();
void withdraw();

int main() {
    printf("=================================\n");
    printf("    WELCOME TO THE ATM SYSTEM    \n");
    printf("=================================\n\n");
    if (!login()) {
        printf("\nToo many incorrect attempts. Access denied. Exiting program...\n");
        return 0;
    }
    showMenu();
    return 0;
}

bool login() {
    int enteredPIN;
    int attempts = 3;
    while (attempts > 0) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &enteredPIN);
        if (enteredPIN == correctPIN) {
            printf("\nLogin successful!\n");
            return true;
        } else {
            attempts--;
            if (attempts > 0) {
                printf("Incorrect PIN. You have %d attempt(s) remaining.\n\n", attempts);
            }
        }
    }

    return false;
}

void showMenu() {
    int choice;
    do {
        printf("\n=================================\n");
        printf("           ATM MENU              \n");
        printf("=================================\n");
        printf("1. Balance Inquiry\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("---------------------------------\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                printf("\nThank you for using our ATM. Goodbye!\n");
                break;
            default:
                printf("\nInvalid choice! Please enter a number between 1 and 4.\n");
        }
    } while (choice != 4);
}

void checkBalance() {
    printf("\n---------------------------------\n");
    printf("Current Account Balance: Ksh%.2f\n", balance);
    printf("---------------------------------\n");
}

void deposit() {
    float amount;
    printf("\nEnter amount to deposit: Ksh");
    scanf("%f", &amount);
    if (amount <= 0) {
        printf("Error: Deposit amount must be a positive number greater than zero.\n");
    } else {
        balance += amount;
        printf("Successfully deposited Ksh%.2f\n", amount);
        checkBalance();
    }
}

void withdraw() {
    float amount;
    printf("\nEnter amount to withdraw: Ksh");
    scanf("%f", &amount);
    if (amount <= 0) {
        printf("Error: Withdrawal amount must be a positive number greater than zero.\n");
    }
    else if (amount > balance) {
        printf("Error: Insufficient balance! Your current balance is Ksh%.2f\n", balance);
    } else {
        balance -= amount;
        printf("Successfully withdrew Ksh%.2f\n", amount);
        checkBalance();
    }
}
