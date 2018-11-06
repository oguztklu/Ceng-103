#include <stdio.h>


int main() {


	int a = 0, b = 0;

	int truth = 0;

	printf("Enter the logical operator: ");
	char logic;
	scanf(" %c", &logic);

	printf("Enter the value of A:");
	scanf("%d", &a);
	printf("Enter the value of B:");
	scanf("%d", &b);

	switch (logic)
	{
	case '&':
		truth = (a && b);
		printf("The truth value of the operation is: %d\n", truth);

			break;
	case 'V':
		truth = (a || b);
		printf("The truth value of the operation is: %d\n", truth);
		break;
	case 'X':
		truth = (!(a) && b) || (a && !(b));
		printf("The truth value of the operation is: %d\n", truth);
		break;
	default:
		printf("Wrong Letter !!");
		break;
	}








	return 0;
}