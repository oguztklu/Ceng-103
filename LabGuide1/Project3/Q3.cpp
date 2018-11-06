#include <stdio.h>



int main() {

	char logic;
	int a = 0, b = 0;
	int truth = 0;
	printf("Enter the logical operation : ");
	scanf("%c", &logic);
	printf("Enter the value of A: ");
	scanf("%d", &a);
	printf("Enter the value of B: ");
	scanf("%d", &b);
	switch (logic)
	{
	case 'V':
		truth = (a || b);
		printf("The truht value of the operation is :  %d\n", truth);
		break;
	case '&':
		truth = (a && b);
		printf("The truht value of the operation is :  %d\n", truth);
		break;
	case 'X':
		truth = (!(a) && b) || (a && (!b));
		printf("The truht value of the operation is :  %d\n", truth);
		break;

	default:
		printf("Wrong choice !! \n");
		break;
	}







	return 0;
}