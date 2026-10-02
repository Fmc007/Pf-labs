#include<stdio.h>
int main(){
	int category,rate,item;
	printf("Enter your category: (1 for Beverages, 2 for Main Course, or 3 for Desserts)\n");
	scanf("%d", &category);
	switch (category){
		case 1:
			printf("Enter your Item: (1 for water..2 for soft drink..3 for milkshakes)");
			scanf("%d", &item);
			switch(item){
				case 1:
					rate=50;
					break;
				case 2:
					rate=150;
					break;
				case 3:
					rate=300;
					break;	
				default:
				printf("Invalid item choice");		
			}
			break;
		case 2:
			printf("Enter your Item: (1 for biryani..2 for pizza..3 for roll )");
			scanf("%d", &item);
			switch(item){
				case 1:
					rate=250;
					break;
				case 2:
					rate=350;
					break;
				case 3:
					rate=180;
					break;	
				default:
				printf("Invalid item choice");		
			}
			break;
		case 3:
			printf("Enter your Item: (1 for Icecream..2 for cake..3 for tiramisu )");
			scanf("%d", &item);
			switch(item){
				case 1:
					rate=150;
					break;
				case 2:
					rate=250;
					break;
				case 3:
					rate=600;
					break;	
				default:
				printf("Invalid item choice");		
			}
			break;	
		default: 
		printf("Invalid category");
				
	}
	printf ("Your bill is %d", rate);
}
