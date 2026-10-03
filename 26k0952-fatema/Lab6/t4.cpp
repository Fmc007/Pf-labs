#include <stdio.h>
int main() {
    int pin, temp, digit;
    int sum = 0;
    int reversed_pin = 0;
    int length = 0;

    printf("Enter a 4-to-6 digit ATM PIN: ");
    scanf("%d", &pin);

    temp = pin;

    while (temp > 0) {
        length++;
        temp /= 10;
    }

    if (length < 4 || length > 6) {
        printf("Error: Invalid PIN length! PIN must be 4 to 6 digits.\n");
        return 1;
    }
    temp = pin;

    while (temp > 0) {
        digit = temp % 10;         
        sum += digit;              
        reversed_pin = (reversed_pin * 10) + digit; 
        temp /= 10;               
    }
    printf("Sum of Digits: %d\n", sum);
    printf("Reversed PIN:  %d\n", reversed_pin);
}

