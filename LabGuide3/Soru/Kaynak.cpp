#include <stdio.h>

int kacbasamakli(int x) {

	int a = 1;
	int  y = x;
	int basamaksayisi = 1;
	

	while (true)
	{
		y = y / 10;
		if (y == 0)
		{
			break;
		}
		else
		{
			basamaksayisi++;
			

		}
		
		
	}

	return basamaksayisi;

}


int basamakCarpimi(int x) {
	int basamaksayisi = kacbasamakli(x);
	int basamakcarpim = 1;
	int a = 1;
	for (int i = 1; i < basamaksayisi+1; i++)
	{
		basamakcarpim *= (x / a) % 10;
		a = a * 10;

	}






	return basamakcarpim;
}

int main() {


	int sayi = 0;
	printf("Enter a pozitif number : ");
	scanf("%d", &sayi);
	int bascarp = basamakCarpimi(sayi);
	printf("Girilen Sayi(%d) nin basamaklari carpimi : %d\n", sayi, bascarp);
	while (bascarp >= 10)
	{
		printf("Yeni sayinin(%d) basamaklar carpimi : %d\n", bascarp, basamakCarpimi(bascarp));
		bascarp = basamakCarpimi(bascarp);
		
	}


	return 0;
}