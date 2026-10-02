#include <stdio.h>
int main(){
    int units;
    double rate=5, bill;
    
    printf("Enter units: ");
    scanf("%d", &units);
    bill = units * rate;

    if (units < 100) {
        int dis = bill * 0.10;
        bill -= dis;
        printf("10%% discount applied! Final Bill: $%.2f\n", bill);
    } else {
        printf("No discount applicable. Final Bill: $%.2f\n", bill);
    }
}
