#include <stdio.h>
#include <conio.h>

int TinhTong(int a, int b, int c = 0, int d = 0)
{
	return a + b + c + d;
}

int main()
{
	int a = 1, b = 2, c = 3, d = 4;
	int Tong = TinhTong(a, b, c, d);
	printf("\nTong = %d", Tong);

	getch();
	return 0;
}