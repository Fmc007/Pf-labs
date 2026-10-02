#include<stdio.h>
#include <math.h>
int main(){
	int mode,a,b,num,result;
	char op;
	printf("===SELECT THE MODE===\n");
	printf("'1' for Basic Arithmetic \n '2' for Power/Root operations: ");
	scanf("%d", &mode);
	switch(mode){
		case 1:
			printf("Enter you operator: ");
			scanf(" %c", &op);
			switch(op){
				case '+':
					printf("Enter num1 and num2: ");
					scanf("%d %d", &a, &b);
					result=a+b;
					break;
				case '-':
					printf("Enter num1 and num2: ");
					scanf("%d %d", &a, &b);
					result=a-b;
					break;
				case '*':
					printf("Enter num1 and num2: ");
					scanf("%d %d", &a, &b);
					result=a*b;
					break;
				case '/':
					printf("Enter num1 and num2: ");
					scanf("%d %d", &a, &b);
					result=a/b;
					break;		
				default: 
				printf("Invalid operation");	
			}
			break;
		case 2:
			printf("Enter 's' to find squre of a number or 'r' to find root of a number: ");
			scanf(" %c", &op);
			switch(op){
				case 's':
					printf("Enter number:");
					scanf("%d", &num);
					result=pow(num,2);
					break;
				case 'r':
					printf("Enter number:");
					scanf("%d", &num);
					result=sqrt(num);
					break;
				default:
					printf("Invalid operation");	
		}
		    break;
		default:
			printf("Invalid mode selected");
			
	}
	printf("Result: %d", result);
}
