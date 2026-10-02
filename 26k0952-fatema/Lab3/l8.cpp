#include <stdio.h>
#include <ctype.h>
int main() {
    char grade;
    printf("Enter grade letter: ");
    scanf(" %c", &grade);

    grade = toupper(grade);

    switch (grade) {
        case 'A':
            printf("Very Good\n");
            break;
        case 'B':
            printf("Good\n");
            break;
        case 'C':
        case 'D':
            printf("Work Hard\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid grade entered.\n");
    }
}
