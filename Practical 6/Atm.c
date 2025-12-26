#include <stdio.h>
int main(){
    // Saurav kumar 11755
    int correctPIN = 1234;
    int enteredPIN;
    int attempts = 3;
    while (attempts > 0)
    {
        printf("Enter your ATM PIN: ");
        scanf("%d", &enteredPIN);
        if (enteredPIN == correctPIN)
        {
            printf("Authentication successful! Access granted.\n");
            return 0;
        }
        else
        {
            attempts--;
            printf("Incorrect PIN. Attempts left: %d\n", attempts);
        }
    }
    printf("Your card is blocked due to multiple incorrect attempts.\n");
    return 0;
}
//OUTPUT:

//adityarai@Adityas-MacBook-Air-4 pfc1 % cd "/Users/adityarai/Desktop/pfc1/practical6/" && gcc atm.c -o atm && "/Users/adityarai/Desktop/pfc1/practical6/"atm
//Enter your ATM PIN: 2345
//Incorrect PIN. Attempts left: 2
//Enter your ATM PIN: 8934
//Incorrect PIN. Attempts left: 1
//Enter your ATM PIN: 9939
//Incorrect PIN. Attempts left: 0
//Your card is blocked due to multiple incorrect attempts.
