#include<stdio.h>
int main(){
	int rate,units,bill;
	char type;
	printf("Enter the amounts of units comsumed:  ");
	scanf("%d", &units);
	printf("Enter the type ('D' for domestic, 'C' for commercial) :  ");
	scanf(" %c", &type);
	if(type=='D'|| type=='d'){
		if (units<= 100){
			rate=5;
		}
		else if(units<=300){
			rate=7;
		}
		else{
			rate=10;
		}
	}
	else if (type=='c'|| type=='C'){
		if (units<= 100){
			rate=7;
		}
		else if(units<=300){
			rate=9;
		}
		else{
			rate=12;
		}
	}
	else{
		printf("Invalid input");
	}
	bill=rate*units;
	printf("Your bill this month is: %d", bill);
}
