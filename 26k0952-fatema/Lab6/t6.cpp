#include<stdio.h>
int main(){
	int marks;
	do{
		printf("enter marks: ");
		scanf("%d", &marks);
		if(marks>100||marks<0){
			printf("Enter marks withing 0-100\nEntry marks:");
		}
	}
	while(marks>100||marks<0);
	if(marks>=50){
		printf("You passed");
	}
	else{
		printf("You failed");
	}
	}
	
