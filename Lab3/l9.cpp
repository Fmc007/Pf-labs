#include <stdio.h>
#include <ctype.h>
int main() {
    char signal;
    printf("Enter signal letter (R, Y, G): ");
    scanf(" %c", &signal);

    signal = toupper(signal);

    switch (signal) {
        case 'R':
            printf("Stop\n");
            break;
        case 'Y':
            printf("Wait\n");
            break;
        case 'G':
            printf("Go\n");
            break;
        default:
            printf("Invalid signal color.\n");
    }
}
