#include <stdio.h>
#include <math.h>

int main() {

	printf("Please enter the number of terms: ");
	int term = 0;
	scanf("%d", &term);
	printf("Please enter a value for x: ");
	double x = 0.0;
	scanf("%lf", &x);

	double result = 0.0;
	int poww = 1;

	for (int i = 1; i <= term; i++)
	{
		result += pow(-1, i+1)*pow((x + (i / 10.0)),poww ) / (2.0 * i);
		poww += 2;
	}

	//result = -1 * result;

	printf("The result is %.2lf", result);






	return 0;
}