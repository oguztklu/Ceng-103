#include <stdio.h>



int main() {

	printf("Enter the amount of the purchase: ");
	double pur = 0.0;
	scanf("%lf", &pur);
	char country;
	printf("Enter the county: ");
	scanf(" %c", &country);


	switch (country)
	{
	case 'A':
		pur = pur + (pur*8.0) / 100.0;
		printf("The amount owed is %.2lf\n", pur);
		break;
	case 'B':
		pur = pur + (pur*18.0) / 100.0;
		printf("The amount owed is %.2lf\n", pur);
		break;
	case 'C':
		pur = pur + (pur*5.0) / 100.0;
		printf("The amount owed is %.2lf\n", pur);
		break;
	default:
		printf("Wrong Letter !!!\n");
		break;
	}










	return 0;
}