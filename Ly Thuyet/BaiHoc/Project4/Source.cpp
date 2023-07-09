#include <stdio.h>
#include <conio.h>
#include <time.h>

int TinhTong_1(int a, int b)
{
	return a + b;
}

// Hàm nội tuyến.
inline int TinhTong_2(int a, int b)
{
	return a + b;
}

int main()
{
	clock_t start1 = clock();

	for(int i = 1; i <= 100000000; i++)
		TinhTong_1(1, 2);

	clock_t finish1 = clock();

	clock_t start2 = clock();

	for(int i = 1; i <= 100000000; i++)
		TinhTong_2(1, 2);

	clock_t finish2 = clock();

	// Tính theo miliseconds
	double ThoiGian1 = (finish1 - start1);
	double ThoiGian2 = (finish2 - start2);

	printf("\nHam khong xai inline: %lf", ThoiGian1);
	printf("\nHam co xai inline: %lf", ThoiGian2);

	getch();
	return 0;
}