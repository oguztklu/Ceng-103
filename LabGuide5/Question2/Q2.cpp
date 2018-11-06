#include <stdio.h>

void repeat(char ch, int times, int line) {

	for (int i = 0; i < line; i++)
	{
		for (int i = 0; i < times; i++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}




}

int main() {

	char ch;
	int line = 0;
	int times = 0;
	printf("Enter a char : ");
	scanf(" %c", &ch);
	printf("How many lines the character to be printed: ");
	scanf("%d", &line);

	printf("How many times the character to be printed on a line: ");
	scanf("%d", &times);

	repeat(ch, times, line);





	return 0;
}