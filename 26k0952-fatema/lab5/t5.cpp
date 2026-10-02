#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter the three sides of the triangle (a b c): ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c) {
        if (a + c > b) {
            if (b + c > a) {
                if (a == b) {
                    if (b == c) {
                        printf("Equilateral Triangle\n");
                    } 
					else {
                        printf("Isosceles Triangle\n");
                    }
                } 
				else {
                    if (a == c) {
                        printf("Isosceles Triangle\n");
                    } 
					else {
                        if (b == c) {
                            printf("Isosceles Triangle\n");
                        }
						else {
                            printf("Scalene Triangle\n");
                        }
                    }
                }

            } 
			else {
                printf("Not a valid triangle\n");
            }
        } 
		else {
            printf("Not a valid triangle\n");
        }
    } 
	else {
        printf("Not a valid triangle\n");
    }
}
