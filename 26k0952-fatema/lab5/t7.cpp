#include<stdio.h>
int main(){
	char dep;
	int sem;
	printf("Enter your department: ");
	scanf(" %c", &dep);
	switch (dep){
		case 'c':
			printf("Enter your semester: ");
			scanf("%d", &sem);
			switch (sem){
				case 1:
					printf("Your core course is Programming fundementals");
					break;
				case 2:
					printf("Your core course is OOP");
					break;	
				case 3:
					printf("Your core course is DSA");
					break;	
				default:
				printf("Invalid semester entered");	
			}
		break;
		case 'e':
			printf("Enter your semester: ");
			scanf("%d", &sem);
			switch (sem){
				case 1:
					printf("Your core course is Linear circuits");
					break;
				case 2:
					printf("Your core course is Digital Logic Design");
					break;	
				case 3:
					printf("Your core course is Singal and Systems");
					break;	
				default:
				printf("Invalid semester entered");	
			}
			break;
		case 'b':
			printf("Enter your semester: ");
			scanf("%d", &sem);
			switch (sem){
				case 1:
					printf("Your core course is Financial Accounting");
					break;
				case 2:
					printf("Your core course is Principles of Management");
					break;	
				case 3:
					printf("Your core course is Principles of Marketing");
					break;	
				default:
				printf("Invalid semester entered");	
			}
			break;	
	}
}
