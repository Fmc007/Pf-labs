#include <stdio.h>
int main() {
    int age, bill, dis;
    int w = 800, h = 1000;
    char day;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter the day ('W' for weekday, 'H' for holiday/weekend): ");
    scanf(" %c", &day); 
    if (age < 12 || age > 60) {
        if (day == 'w' || day == 'W') {
            dis = w * 0.10;
            bill = w - dis;
        } 
		else if (day == 'h' || day == 'H') {
            dis = h * 0.15;
            bill = h - dis;
        } 
		else {
            dis=0;
        }
    } 
	else {
        if (day == 'w' || day == 'W') {
            bill = w;
        } else if (day == 'h' || day == 'H') {
            bill = h;
        } 
    }
    printf("Final Bill: Rs. %d\n", bill);
}
