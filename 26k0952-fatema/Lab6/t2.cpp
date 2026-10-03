#include<stdio.h>
int main(){
	int n,score,total=0;
	float avg;
	printf("Enter the number of students: ");
	scanf("%d", &n);
	for (int i=1;i<=n;i++){
		printf("Enter your test score (out of 100): ");
		scanf("%d", &score);
		total=total+score;
	}
	printf("The class total is : %d\n",total);
	avg=total/n;
	printf("The class average is: %.2f",avg);
}
