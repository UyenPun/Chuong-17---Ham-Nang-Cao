#include <stdio.h>
#include <conio.h>
#include <stdarg.h> // va_list, va_start, va_arg, va_end

int TinhTong(int n, ...) // n là số lượng các số sẽ có của ...
{
	int Tong = 0;
	int value;
	va_list vl;
	va_start(vl, n);

	for(int i = 1; i <= n; i++)
	{
		value = va_arg(vl, int);
		Tong += value;
	}
	va_end(vl);
	return Tong;
}

int TimMax(int n, ...) // n là số lượng
{
	int value;
	va_list vl;
	va_start(vl, n);
	int Max = va_arg(vl, int);
	for(int i = 2; i <= n; i++)
	{
		value = va_arg(vl, int);
		if(value > Max)
		{
			Max = value;
		}
	}
	va_end(vl);
	return Max;
}

int main()
{
	int Tong = TinhTong(6, 1, 3, 5, 7, 8, 10);
	printf("\nTong la: %d", Tong);

	int Max = TimMax(5, 2, 3, 5, 1, 4);
	printf("\nMax = %d", Max);

	getch();
	return 0;
}