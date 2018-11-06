#include <stdio.h>


int main() {


	int hour = 0, week = 0, att = 0;

	printf("Enter the number of week in a semester : ");
	scanf("%d", &week);
	printf("Enter the number of lecture hour in a week : ");
	scanf("%d", &hour);
	char lec;
	printf("What is your lecture (M for Math) / (T for Turkish) : ");
	scanf(" %c", &lec);

	if (lec != 'M' && lec != 'T')
	{
		printf("You entered a wrong lecture code !!\n");
	}
	else if (lec == 'T')
	{
		int  a = hour * week;

		printf("You can be absent in %d hour \n", ((a*35)/100 ) + 1);
	}
	else if (lec == 'M') {
	
		int a = hour * week;

		printf("You can be absent in %d hour \n", ((a * 25) / 100) + 1);
	
	}







	return 0;
}