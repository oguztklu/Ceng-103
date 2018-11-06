#include <stdio.h>



int HowManyDigit(int sayi) {
	int digit = 0;


	while (sayi != 0)
	{
		digit++;
		sayi = sayi / 10;
	}


	return digit;

}

int main() {
	int number = 0;
	printf("Enter a positive number : ");
	scanf("%d", &number);

	while (number <= 0)
	{
		printf("Sorry! You didn't give a positive number!!!\n");
		printf("Enter a positive number : ");
		scanf("%d", &number);

	}
	
	int digit = HowManyDigit(number);
	for (int i = 0,j = 1; i < digit ; i++,j *= 10)
	{
		switch ((number / j) % 10)
		{
		
		case 1:
			printf("one\t");
			break;
		case 2:
			printf("two\t");
			break;
		case 3:
			printf("three\t");
			break;
		case 4:
			printf("four\t");
			break;
		case 5:
			printf("five\t");
			break;
		case 6:
			printf("six\t");
			break;
		case 7:
			printf("seven\t");
			break;
		case 8:
			printf("eight\t");
			break;
		case 9:
			printf("nine\t");
			break;
		default:
			break;
		}
	}

	printf("\n");






	return 0;
}