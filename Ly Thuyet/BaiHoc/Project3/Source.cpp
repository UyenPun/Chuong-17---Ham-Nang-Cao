#include <stdio.h>
#include <conio.h>

void CapNhat(int &x, int value)
{
	x = value;
}

int &CapNhatCach2(int &x)
{
	return x;
}

int &SetGiaTri(int *a, int i)
{
	return a[i - 1];
}

int main()
{
	int value = 5;
	int x;
	
	CapNhat(x, value);
	printf("\nx = %d", x);

	value = 10;
	CapNhatCach2(x) = value;
	printf("\nx = %d", x);

	int a[10];
	SetGiaTri(a, 1) = 5; // a[0] = 5
	printf("\na[0] = %d", a[0]);

	getch();
	return 0;
}