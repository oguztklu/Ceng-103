#include <stdio.h>
#include <math.h>
#define PI  3.14159

int main() {

	double sphere = 0, cube = 0;

	printf("Enter the radius of the sphere : ");
	scanf("%lf", &sphere);
	printf("Enter the one side of the cube : ");
	scanf("%lf", &cube);
	double v1 = (4.0 / 3)*PI*sphere*sphere*sphere;
	double v2 = pow(cube, 3);

	printf("The volume of the sphere is: %.2lf\nThe volume of the cube is : %.2lf\n", v1, v2);







	return 0;
}