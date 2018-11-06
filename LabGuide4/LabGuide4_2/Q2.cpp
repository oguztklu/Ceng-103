#include <stdio.h>
#include <math.h>



int main() {

	int term = 0;
	double x = 0.0;
	double result = 0.0;
	printf("Please enter the number of terms: ");
	scanf("%d", &term);
	printf("Please enter a value for x: ");
	scanf("%lf", &x);


	for (int i = 1, poww = 2, bolum = 1; i <= term; i++,poww += 2 , bolum +=2)
	{
		result += pow(-1, i + 1)*pow(2.0*x - i / 10.0, poww) / bolum;
	}

	printf("The result is %.2lf\n", result);




	return 0;
}