#include <stdio.h>
#include <math.h>


int main() {

	double heigh;
	double weigh;
	double bmi;


	printf("Please enter weight for calculation:");
	scanf("%lf", &weigh);

	printf("Please enter height as M.CM:");
	scanf("%lf", &heigh);

	bmi = weigh / pow(heigh, 2);
	printf("The BMI for the person with %.2lf in height and %.2lf in weight is: %.2lf\n",heigh,weigh,bmi);



	return 0;
}