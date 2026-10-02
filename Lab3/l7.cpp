#include <stdio.h>
int main() {
    int num1, num2;
    char c;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Enter operator: ");
    scanf(" %c", &c); 
    
    switch (c) {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;
        case '-':
            printf("Result: %d\n", num1 - num2);
            break;
        case '*':
            printf("Result: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %d\n", num1 / num2);
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Invalid operator.\n");
    }
}
