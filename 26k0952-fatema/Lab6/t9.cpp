#include<stdio.h>
int main(){
	int prod[10],search;
	for(int i=0;i<10;i++){
		printf("Enter stock count for shelf %d: ",i+1);
		scanf("%d",&prod[i]);
	}
	for(int i=9;i>=0;i--){
		printf("shelf %d: %d items\n",i+1,prod[i]);
	}
	printf("\nEnter stock count to search for: ");
    scanf("%d", &search);
    int found_index = -1; 
for (int i = 0; i < 10; i++) {
    if (prod[i] == search) {
        found_index = i; 
        break;
    }
}
if (found_index != -1) {
    printf("Match found at shelf %d!\n", found_index);
} else {
    printf("Does not exist anywhere in the warehouse.\n");
}
}
