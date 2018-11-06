#include <stdio.h>
#include <stdlib.h>

int menu() {
	int secim = 0;
	printf("1-Perfect ?\n2-Prime ?\n3-Exit\nEnter your choice : ");
	scanf("%d", &secim);

	return secim;
}

bool isPerfect(int sayi) {

	int sum = 0;

	for (int i = 1; i < sayi; i++)
	{
		if (sayi % i == 0)
		{
			sum += i;
		}

	}

	if (sum == sayi)
	{
		return true;
	}

	else
	{
		return false;
	}

}



bool isPrime(int sayi) {

	for (int i = 2; i < sayi; i++)
	{
		if (sayi % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main() {

	int number = 0;

	int secim = menu();

	do
	{
		switch (secim)
		{
		case 1:
			printf("\nEnter the number : ");
			scanf("%d", &number);
			if (isPerfect(number))
			{
				printf("%d is a Perfect number! \n", number);
			}
			else {
				printf("%d is not a Perfect number! \n", number);

			}
			break;
		case 2:
			printf("\nEnter the number : ");
			scanf("%d", &number);
			if (isPrime(number))
			{
				printf("%d is a Prime number ! \n", number);
			}
			else {
				printf("%d is not a Prime number ! \n", number);

			}
			break;
		case 3:
			quick_exit(0);
			break;
		default:
			printf("Wrong choice! enter your choice again : ");
			scanf("%d", &secim);
			while (!(secim <= 3 && secim >= 1))
			{
				printf("Wrong choice !! Enter again : ");
				scanf("%d", &secim);
			}
			if (secim == 3)
			{
				quick_exit(0);

			}
			else if (secim == 2) {
				printf("\nEnter the number : ");
				scanf("%d", &number);
				if (isPrime(number))
				{
					printf("%d is a Prime number ! \n", number);
				}
				else {
					printf("%d is not a Prime number ! \n", number);

				}
			}
			else	if (secim == 1) {
				printf("\nEnter the number : ");
				scanf("%d", &number);
				if (isPerfect(number))
				{
					printf("%d is is a Perfect number!  \n", number);
				}
				else {
					printf("%d is not a Perfect number! \n", number);

				}

			}
			break;
		}
		secim = menu();
	} while (secim != 3);




	return 0;
}