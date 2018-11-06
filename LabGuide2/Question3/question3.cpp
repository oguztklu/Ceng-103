#include <stdio.h>
#include <math.h>


int main() {

	double dizi[3];

	printf("Enter three numbers : ");
	scanf("%lf %lf %lf", &dizi[0], &dizi[1], &dizi[2]);
	printf("The average is %.2lf\n", (dizi[0] + dizi[1] + dizi[2]) / 3);







	return 0;
}