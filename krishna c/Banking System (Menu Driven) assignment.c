#include <stdio.h>

int main() {
	int customers,i,choice,account;
	printf("enter number of customers:-");
	scanf("%d",&customers);
	float balance[customers],amount,total=0;
	float minBalance=1000;
	printf("enter thier balances:-");
	for(i=0;i<customers;i++) {
		scanf("%f",&balance[i]);
	}
	do {
		printf("\n----- bank -----\n");
        printf("1. deposit\n");
        printf("2. withdraw\n");
        printf("3. check balance\n");
        printf("4. total bank balance\n");
        printf("5. customers below minimum balance\n");
        printf("6. exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice) {
        	case 1:
        		printf("enter customer number:");
        		scanf("%d",&account);
        		printf("enter amount to deposit:");
        		scanf("%f",&amount);
        		if(account>=1 && account<=customers) {
        			balance[account-1]+=amount;
        			printf("deposit successful!\n new balance: %.2f\n",balance[account-1]);
        		}
				break;
        	case 2:
        		printf("enter customer number:");
        		scanf("%d",&account);
        		printf("enter amount to withdraw:");
        		scanf("%f",&amount);
        		if(account>=1 && account<=customers) {
        			if(balance[account-1]>=amount) {
        				balance[account-1]-=amount;
        				printf("withdrwal successful!\n new balance: %.2f\n",balance[account-1]);
					}
					else {
						printf("insufficient balance\n");
					}
				}
				else {
					printf("invalid customer number\n");
				}
			case 3:
				printf("enter customer number:");
                scanf("%d",&account);
                if(account>=1 && account<=customers) {
                    printf("customer %d balance= %.2f\n",account,balance[account-1]);
                } else {
                    printf("invalid customer number\n");
                }
                break;
			case 4:
                for(i=0;i<customers;i++) {
                    total+= balance[i];
                }
                printf("total bank balance= %.2f\n",total);
                break;
            case 5:
            	printf("customers with balance below %.2f:\n",minBalance);
                for(i=0;i<customers;i++) {
                    if(balance[i]<minBalance) {
                        printf("customer %d= balance= %.2f\n",i+1,balance[i]);
                    }
                }
                break;
            case 6:
            	printf("exiting program...");
            	break;
            default:
            	printf("invalid choise");
		}
	} while(choice!=6);
}
