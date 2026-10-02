#include<stdio.h>
int main(){
	int type,trans,amount,balance=10000,nbalance;
	printf("enter your acc type ('1' for Savings or '2' for Current): ");
	scanf("%d", &type);
	switch(type){
		case 2:
			printf("enter your transaction ('1' for Deposit, '2' for Withdraw, or '3' for Check Balance): ");
	        scanf("%d", &trans);
	        switch(trans){
	        	case 2:
	        		printf("Enter your amount:");
	        		scanf("%d", &amount);
	        		if(amount>0 && amount<balance){
	        			nbalance=balance-amount;
					}
					else {
						printf("Insufficient balance");
					}
					break;
				case 1:
					printf("Enter your amount:");
	        		scanf("%d", &amount);
	        		nbalance=balance+amount;
	        		break;
	        	case 3:
	        		nbalance=balance;
	        		break;
	        	default:
				printf("Invalid transaction");	
					
			}
			break;
		case 1:
			printf("enter your transaction ('1' for Deposit, '2' for Withdraw, or '3' for Check Balance): ");
	        scanf("%d", &trans);
	        switch(trans){
	        	case 2:
	        		printf("Enter your amount:");
	        		scanf("%d", &amount);
	        		if(amount>0 && amount<2000){
	        			nbalance=balance-amount;
					}
					else {
						printf("Crosses your daily limit");
					}
					break;
				case 1:
					printf("Enter your amount:");
	        		scanf("%d", &amount);
	        		nbalance=balance+amount;
	        		break;
	        	case 3:
	        		nbalance=balance;
	        		break;
	        	default:
				printf("Invalid transaction");
					
			}
			break;	
		default:
		printf("Invalid acc type");	
	}
	printf("Transaction successful! \n Your new balance is: %d",nbalance);
}
