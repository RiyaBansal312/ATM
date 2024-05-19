#include <stdio.h>

// Initializing the balance amount as 0.
float balance_amount = 0.0;
int user_pin = 1234; // Default PIN

// Function for operations in ATM Machine
void atm_machine_transaction();
void change_pin();
void select_language();

int main()
{
    atm_machine_transaction();
    printf("Thank you for the visit!\n");
    return 0;
}

// Function definition for operations in ATM Machine
void atm_machine_transaction()
{
    printf("Welcome to the ATM Machine\n");

    // PIN verification
    int entered_pin;
    printf("Enter your PIN: ");
    scanf("%d", &entered_pin);

    if (entered_pin != user_pin) {
        printf("Incorrect PIN. Please try again.\n");
        return;
    }

    printf("\nChoices Available in the ATM Machine\n");
    printf("1. Deposit Money\n");
    printf("2. Withdraw Money\n");
    printf("3. Balance Amount\n\n");

    // Take an appropriate option to select which operation
    // you want to be performed by the ATM Machine.

    int option;
    printf("Your option: ");
    scanf("%d", &option);

    float withdraw_amount, deposit_amount;
    int new_transaction;

    switch (option)
    {
    // Case for Depositing money
    case 1:
        printf("\nEnter the amount to deposit: ");
        scanf("%f", &deposit_amount);
        balance_amount += deposit_amount;
        printf("Your current balance is Rs. %.2f. Thanks for depositing!\n", balance_amount);
        break;

    // Case for Money Withdrawal
    case 2:
        printf("\nPlease enter amount to withdraw: ");
        scanf("%f", &withdraw_amount);
        if (withdraw_amount > balance_amount)
        {
            printf("Insufficient funds! Please proceed to deposit money.\n");
        }
        else
        {
            balance_amount -= withdraw_amount;
            printf("You have withdrawn Rs. %.2f and your balance is Rs. %.2f\n", withdraw_amount, balance_amount);
        }
        break;

    // Case for checking current bank amount
    case 3:
        printf("Your current bank balance is: %.2f\n", balance_amount);
        break;

    // Case for options out of range
    default:
        printf("Invalid Option!\nPlease choose from the provided options to continue.\n");
    }
}
//added the pin changing function to the code 
void change_pin()
{
    int new_pin;
    printf("Enter your new PIN: ");
    scanf("%d", &new_pin);
    user_pin = new_pin;
    printf("PIN changed successfully!\n");
}

<<<<<<< HEAD
//in future we can add language selection code 
void select_language()
{
    printf("Welcome to the ATM Machine\n");
    printf("Please select your preferred language:\n");
    printf("1. English\n");
    printf("2. Spanish\n");
    printf("3. French\n");
    int language_choice;
    printf("Your choice: ");
    scanf("%d", &language_choice);
    switch (language_choice)
    {
    case 1:
        // English language selected, no action needed
        break;
    case 2:
        // Code to set language to Spanish (if needed)
        printf("Spanish language selected.\n");
        break;
    case 3:
        // Code to set language to French (if needed)
        printf("French language selected.\n");
        break;
    default:
        printf("Invalid choice. English language selected by default.\n");
    }
}
=======
// RISHABH DID SOME CHANGES!!
>>>>>>> df650fb715dcdb1520f4ea407c9194af67a6bab9
