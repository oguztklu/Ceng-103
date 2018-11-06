#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int x = 3, y = 4, z = 5;
	int q = 1;
	int a, b, c;
	printf("Please enter the value for A, B and C: ");
	scanf("%d %d %d", &a, &b, &c);

	srand(time(0));
	q = (rand() % 10) + 1;
	printf("q is : %d\n", q);
	double result = 1;
	//printf("The result is : %d", result);

	
	//printf("%d %d %d %d %d %d %d\n", a, b, c, x, y, z, q);
	result = double(c)*(x*y/double(q*z))*(a / double(b));



	printf("The result is %.2lf\n", result);
	
	return 0;
}