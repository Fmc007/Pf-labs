#include <stdio.h>
int main() {
    float temp[8];
    for (int i = 0; i < 8; i++) {
        printf("Hour %d: ", i + 1);
        scanf("%f", &temp[i]);
    }
    float hottest = temp[0];
    float coldest = temp[0];
    float second_hottest = -999.0; 
    for (int i = 0; i < 8; i++) {
        if (temp[i] < coldest) {
            coldest = temp[i];
        }
        if (temp[i] > hottest) {
            second_hottest = hottest; 
            hottest = temp[i];
        } else if (temp[i] > second_hottest && temp[i] != hottest) {
            second_hottest = temp[i];
        }
    }
    printf("Hottest Temperature:%.1f\n", hottest);
    printf("Coldest Temperature:%.1f\n", coldest);
    printf("Second-Hottest Temperature: %.1f\n", second_hottest);
}
