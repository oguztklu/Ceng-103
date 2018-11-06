#include <stdio.h>
#include <stdlib.h>
void write_digit(int num) {

	for (int i = 1; i <= num; i++)
	{
		printf("%d", i);
	}


}
void write_char(int num) {

	for (int i = 0; i < num; i++)
	{
		printf("*");
	}


}

void draw(int number) {

	for (int i = 1; i <= number; i++)
	{
		write_digit(i);
		write_char(number - i);
		printf("\n");
	}


}

int main() {



	int num = 0;
	printf("Enter a number (1-9 or non-positive to stop):");
	scanf("%d", &num);

	while (true)
	{

		if (num <1)
		{
			break;
		}

		else if (num > 9)
		{
			printf("Enter a number (1-9 or non-positive to stop):");
			scanf("%d", &num);
			while (num > 9 || num < 1) {
				if (num < 1)
				{
					quick_exit(0);
				}
				printf("Enter a number (1-9 or non-positive to stop):");
				scanf("%d", &num);
			}
		}

		draw(num);
		printf("Enter a number (1-9 or non-positive to stop):");
		scanf("%d", &num);
	}
	
	







	return 0;
}