#include <stdio.h>


int main() {

	double amuount = 0;
	char country = 0;


	printf("Enter the amount of the purchase : ");
	scanf("%lf", &amuount);
	printf("Enter the country : ");
	scanf(" %c", &country);

	switch (country)
	{
	case 'A':
		amuount = amuount + (amuount * 7.0) / 100.0;
		printf("The amount owed is %.2lf\n", amuount);
		break;
	case 'B':
		amuount = amuount + (amuount * 6.0) / 100.0;
		printf("The amount owed is %.2lf\n", amuount);
		break;
	case 'C':
		amuount = amuount + (amuount * 4.0) / 100.0;
		printf("The amount owed is %.2lf\n", amuount);
		break;

	default:
		printf("Wrong Letter !!\n");
		break;
	}







	return 0;
}