#include <stdio.h>
#include <math.h>

int factor(int sayi) {
	int fack = 1;

	for (int i = 1; i <= sayi; i++)
	{
		fack *= i;
	}
	return fack;
}

int kare_al(int sayi, int kuvvet) {
	int kare = 1;
	for (int i = 0; i < kuvvet; i++)
	{
		kare *= sayi;
	}
	return kare;
}

int calculate(int n) {

	int result = 0;

	if (n <= 0)
	{
		result = kare_al(n, 5) + factor(abs(n));
	}
	else if (n >= 1 && n < 10)
	{
		result = factor(n) - 120;
	}
	else if (n >= 10 && n%2 ==0)
	{
		for (int i = 2; i <= n; i +=2)
		{
			result += i;
		}
	}
	else if (n >= 10 && n % 2 != 0) {
		for (int i = 1; i <= n; i +=2)
		{
			result += i;
		}
	
	}


	return result;
}

int main() {



	int n = 0;
	printf("Enter n (>= -5): ");
	scanf("%d", &n);

	while (n <= -5)
	{
		printf("Enter n (>= -5): ");
		scanf("%d", &n);
	}

	int calculation = 0;

	for (int i = -5; i <= n; i++)
	{
		calculation += calculate(i);
	}
	printf("Result of the calculation: %d", calculation);
	printf("\n");


	return 0;
}