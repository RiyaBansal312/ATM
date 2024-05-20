#include <stdio.h>

// Function declaration
float calculateBalance(float currentBalance, float transactionAmount, char transactionType);

int main() {
    float balance = 1000.0; // Initial balance
    float amount;
    char type;

    printf("Enter transaction type (D for Deposit, W for Withdrawal): ");
    scanf(" %c", &type);

    printf("Enter amount: ");
    scanf("%f", &amount);

    balance = calculateBalance(balance, amount, type);
    printf("Updated balance: %.2f\n", balance);

    return 0;
}

// Function to calculate the new balance
float calculateBalance(float currentBalance, float transactionAmount, char transactionType) {
    if (transactionType == 'D' || transactionType == 'd') {
        currentBalance += transactionAmount; // Deposit
    } else if (transactionType == 'W' || transactionType == 'w') {
        if (transactionAmount > currentBalance) {
            printf("Insufficient balance!\n");
        } else {
            currentB
