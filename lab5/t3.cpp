#include <stdio.h>
int main() {
    int a, b, c, d;
    
    printf("Enter a, b, c and d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b) {
        if (a > c) {
            if (a > d) {
                printf("A is the highest\n");
            } 
			else {
                printf("D is the highest\n");
            }
        } 
		else { 
            if (c > d) {
                printf("C is the highest\n");
            } else {
                printf("D is the highest\n");
            }
        }
    } 
	else { 
        if (b > c) {
            if (b > d) {
                printf("B is the highest\n");
            } 
			else {
                printf("D is the highest\n");
            }
        } 
		else { 
            if (c > d) {
                printf("C is the highest\n");
            }
			else {
                printf("D is the highest\n");
            }
        }
    }
}
