#include<stdio.h>
#include<ctype.h>
int main(){
	char un[20];
	int c,v;
	for (int i=0;i<20;i++){
		printf("Enter the letter no %d: ",i+1);
		scanf(" %c", &un[i]);
	un[i] = toupper(un[i]);
	if(un[i]=='A'||un[i]=='E'||un[i]=='I'||un[i]=='O'||un[i]=='U'){
		v++;
	}
	else{
		c++;
	}
		
	}
	printf("Vowel count:     %d\n", v);
    printf("Consonant count: %d\n", c);
    printf("Stored Username: %s\n", un);
}
