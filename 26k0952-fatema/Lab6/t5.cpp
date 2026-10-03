#include<stdio.h>
int main(){
	int hrs,lvl;
	printf("Enter initial water level: ");
	scanf("%d", &lvl);
	while (lvl!=1){
		if (lvl%2==0){
			lvl=lvl/2;
		}
		else{
			lvl=(3*lvl)+1;
		}
	hrs++;
	printf("At hour %d : %d ltrs of water\n",hrs,lvl)	;
	}
	printf("Time to reach 1ltr was %d hours",hrs);
}
