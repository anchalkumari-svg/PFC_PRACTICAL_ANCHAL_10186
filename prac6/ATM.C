#include <stdio.h>
int main() {
    //Anchal kumari
    //10186
    int correctPin = 1234;
    int pin, attempts = 3;
    while (attempts > 0) {
        printf("Enter ATM PIN: ");
        scanf("%d", &pin);
        if (pin == correctPin) {
            printf("PIN correct. Access granted.\n");
            break;
        } else {
            attempts--;
            printf("Wrong PIN. Attempts left: %d\n", attempts);
        }
    }
    if (attempts == 0) {
        printf("Card blocked.\n");
    }
    return 0;
}
//Enter ATM PIN: 1234
//PIN correct. Access granted.