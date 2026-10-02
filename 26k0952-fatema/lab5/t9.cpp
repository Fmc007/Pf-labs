#include<stdio.h>
int main(){
	char colour,ans;
	printf("Which light are you on?");
	scanf(" %c", &colour);
	switch (colour){
		case 'y':
			printf("Wait for it to turn green and then go!");
			break;
		case 'r':
		printf("Has the pedestrian button been pressed?");
		scanf(" %c", &ans);
		switch(ans){
			case 'y':
				printf("Stop and let pedestrians cross!");
				break;
			case 'n': 
				printf("Stop and wait for the light to turn green!");
				break;
		}
		break;	
		case 'g':
		printf("Has the pedestrian button been pressed?");
		scanf(" %c", &ans);
		switch(ans){
			case 'y':
				printf("Go, but watch closely for pedestrians!");
				break;
			case 'n': 
				printf("Go! Clear road ahead");
				break;
		}
		break;	
	}
}
