// Function to calculate the new balance
float calculateBalance(float currentBalance, float transactionAmount, char transactionType) {
    if (transactionType == 'D' || transactionType == 'd') {
        currentBalance += transactionAmount; // Deposit
    } else if (transactionType == 'W' || transactionType == 'w') {
        if (transactionAmount > currentBalance) {
            printf("Insufficient balance!\n");
        } else {
            currentBalance -= transactionAmount; // Withdrawal
        }
    } else {
        printf("Invalid transaction type!\n");
    }
    return currentBalance;
}
