#include<stdio.h>

struct Bank{
	int acc_num;
	int bal;
	char owner[50];
};
int main(){
	int n,i,choice,m,amount;
	int found=0;
	printf("Enter number of accounts you want to create:");
	scanf("%d",&n);
	
	struct Bank b[n];

	
	for(i=0;i<n;i++){
		printf("Enter account number:\n");
		scanf("%d",&b[i].acc_num);
		
		printf("Enter Account Owner name:\n");
		scanf("%s",&b[i].owner);
		
		printf("Enter amount to deposit:\n");
		scanf("%d",&b[i].bal);
	}
	
	do{
	printf("\n****************************************************");
	printf("\nSelect Operation you wanna perform :\n");
	printf("1.Add Money in account.(Deposit)\n");
	printf("2.Remove money from account.(Withdraw)\n");
	printf("3.Check Balance.\n");
	printf("4.Exit\n");
	printf("\n****************************************************\n");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			found=0;
			
			printf("Enter account number to add money:\n");
			scanf("%d",&m);
			
			for(i=0;i<n;i++){
				if( b[i].acc_num == m){
					
					found=1;
					
					printf("Account found\n");
					printf("\n");
					printf("Enter the amount to deposit\n");
					scanf("%d",&amount);
					
					b[i].bal+=amount;
					
					printf("Money deposited Successfully.");
					break;
					
				}
				
				}
		    if(found ==0){
					printf("Account not found");
		     }
		    
			break;
			
		case 2:
			found=0;
			
			printf("Enter account number to remove money:\n");
			scanf("%d",&m);
			
			for(i=0;i<n;i++){
				if( b[i].acc_num == m){
					
					found=1;
					
					printf("Account found\n");
					printf("\n");
					printf("Enter the amount to withdraw\n");
					scanf("%d",&amount);
					
					if(amount > b[i].bal){
						printf("No sufficient amount in the account\n");
					}
					else{
						b[i].bal-=amount;
						printf("Congratulations , amount successfully withdrawed.");
					}
					break;
		    	}
			}
			if(found ==0){
					printf("Account not found");
				}
				
			break;
		case 3:
			found=0;
			
			printf("Enter account number to check balance:\n");
			scanf("%d",&m);
			
			for(i=0;i<n;i++){
				if( b[i].acc_num == m){
					
					found=1;
					
					printf("Account found\n");
					printf("\n");
					printf("your total balance right now is:%drs\n",b[i].bal);
					break;
		        }
        	}
        	if(found ==0){
					printf("Account not found");
				}
				
            break;
        
        case 4:
        	printf("Thanks for accessing our bank.");
        	break;
        default:
        	printf("Ivalid choice.");
        	
	}
}while(choice!=4);
}
