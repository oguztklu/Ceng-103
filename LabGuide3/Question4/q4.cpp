#include <stdio.h>


int main() {

	int age;
	char disab;
	double ticket = 89.99;
	double baggage = 0.0;


	printf("Enter the age : ");
	scanf("%d", &age);
	printf("Disabbility ? (y/n) : ");
	scanf(" %c", &disab);
	if (disab != 'y' && disab != 'n')
	{
		printf("invalid Answer !!\n");
	}
	else {
		if (disab == 'y')
		{
			ticket = ticket - ((ticket*40.0) / 100.0);
		}
		else {

			if (age > 65)
			{
				ticket = ticket - ((ticket*15.0) / 100.0);


			}

			else if (age >= 13 && age <= 65)
			{
				ticket = ticket;
				

			}

			else if (age < 13)
			{
				ticket = ticket - ((ticket*33.0) / 100.0);

				

			}

		}
		
		
		

		printf("Ticket Payment : %.2lf\n", ticket);
		printf("Enter baggege weight : ");
		scanf("%lf", &baggage);

		if (baggage > 15)
		{
			ticket = ticket + ((baggage - 15.0) * 6.0);
			printf("Your baggage weight exceeds the limit with %.2lf kg, please pay %.2lf TL\n", baggage - 15, ((baggage - 15.0) * 6.0));
		}
	
	
	}

	


	return 0;
}