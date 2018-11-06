#include <stdio.h>
#include <math.h>

int main() {

	double a = 0.0, b = 0.0, c = 0.0;

	printf("Enter a: ");
	scanf("%lf", &a);
	printf("Enter b: ");
	scanf("%lf", &b);
	printf("Enter c: ");
	scanf("%lf", &c);


	double up = fabs(a - c) + pow(b, 1.0 / 7.0) + pow(a,2.0/3.0);
	
	double down = a + (c / b) - pow(fabs(5.0 - (2.0*b)), 1 / 2.0);

	if (down == 0.0)
	{
		printf("ERROR ! Division by ZERO !\n");
	}

	else
	{
		double result = up / down;
		printf("The result is %.4lf\n",result);
	}

	return 0;
}