 while (attempts < maxAttempts && !isVerified) {
        printf("Enter your PIN: ");
        scanf("%d", &enteredPIN);
        if (verifyPIN(enteredPIN, actualPIN)) {
            isVerified = true;
            printf("PIN verified successfully!\n");
        } else {
            attempts++;
            printf("Incorrect PIN. You have %d attempt(s) left.\n", maxAttempts - attempts);
        }
    }
    
    if (!isVerified) {
        printf("Maximum attempts reached. Exiting...\n");
        exit(0);
    }
