#include<stdio.h>
int main(){
	int c,total=280,price;
	do{
		printf("1. Add Item \n");
        printf("2. Remove Item \n");
        printf("3. View Total\n");
        printf("4. Checkout\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &c);
        switch(c){
        	case 1: 
        	printf("Enter price of the item: ");
        	scanf("%d", &price);
        	total=total+price;
        	break;
        	case 2:
        		printf("Enter price of the item: ");
        	scanf("%d", &price);
        		if(price<total){
        	total=total-price;
			}
			else{
				printf("Invalid amount");
			}
        	break;
        	case 3:
        		printf("Your total bill is : %d", total);
        		break;
        	case 4:
				printf("Your total is %d \nThank you for shopping with us!\n",total);
                break;
            default:
                printf("Invalid selection! Please choose an option between 1 and 4.\n"); 
		}
	}
	while(c!=4);
}
