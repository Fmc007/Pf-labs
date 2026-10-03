#include<stdio.h>
int main(){
	int balance=10000,years;
	float total=balance;
	printf("Enter years:");
	scanf("%d", &years);
	for(int i=1;i<=years;i++){
		total=total*2;
		printf("Year %d : Rs.%.2f\n",i,total);
	}
	printf("\nFinal total after %d years is : Rs.%.3f",years,total);
}
