#include<stdio.h>
int main(){
	int price=500;
	for (int i=1;i<=10;i++){
		printf("Price for show %d is : %d\n",i,price);
		price=price+50;
	}
}
