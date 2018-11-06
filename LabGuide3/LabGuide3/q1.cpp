#include <stdio.h>



int main() {
	printf("ACCOUNT INFORMATIONS\n");
	printf("Enter the ballance of account : ");
	double balance = 0.0;
	double deposite = 0.0;
	double withdraw = 0.0;
	scanf("%lf", &balance);
	printf("Enter a daily limit for your account : ");
	int daily_limit = 0;
	scanf("%d", &daily_limit);
	printf("Account Operation\n");
	printf("Press W to Withdraw\nPress D to Deposit\n");
	char operation;
	scanf(" %c", &operation);

	if (operation == 'D')
	{
		printf("Enter the amount of deposite : ");
		scanf("%lf", &deposite);
		printf("New Balance is %.2lf", deposite + balance);
	}
	else if (operation == 'W') {
		printf("Enter the amount to Withdraw : \n");
		scanf("%lf", &withdraw);

		if (withdraw > daily_limit)
		{
			printf("Withdraw Amount is GREATER than your LIMIT!\n");
		}
		else
		{
			printf("New balance is %.2lf", balance - withdraw);
		}
	}
	
	

	return 0;
}