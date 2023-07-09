#include <stdio.h>
#include <conio.h>
#include <math.h>

// ax + b = 0
void GiaiPhuongTrinhBacNhat(float a, float b)
{
	if(a == 0) // pt có dạng: b = 0
	{
		if(b == 0)
		{
			printf("\nPhuong trinh co vo so nghiem");
		}
		else
		{
			printf("\nPhuong trinh vo nghiem");
		}
	}
	else
	{
		float x = -b / a;
		printf("\nPhuong trinh co nghiem x = %f", x);
	}
}

// ax^2 + bx + c = 0
void GiaiPhuongTrinhBacHai(float a, float b, float c)
{
	if(a == 0) // pt co dang: bx + c = 0
	{
		GiaiPhuongTrinhBacNhat(b, c);
	}
	else
	{
		float Denta = b * b - 4 * a * c;
		if(Denta < 0)
		{
			printf("\nPhuong trinh vo nghiem");
		}
		else if(Denta == 0)
		{
			float x = -b / (2 * a);
			printf("\nPhuong trinh co nghiem kep:\nx1 = x2 = %f", x);
		}
		else // Denta > 0
 		{
			float x1 = (-b + sqrt(Denta)) / (2 * a);
			float x2 = (-b - sqrt(Denta)) / (2 * a);

			printf("\nPhuong trinh co 2 nghiem phan biet:\nx1 = %f\nx2 = %f", x1, x2);
		}
	}
}

int main(int argc, char **argv)
{
	if(argc == 3) // xu ly pt bac 1
	{
		float a = atof(argv[1]);
		float b = atof(argv[2]);

		GiaiPhuongTrinhBacNhat(a, b);
	}
	else if(argc == 4) // giai pt bac 2
	{
		float a = atof(argv[1]);
		float b = atof(argv[2]);
		float c = atof(argv[3]);

		GiaiPhuongTrinhBacHai(a, b, c);
	}
	else
	{
		printf("\nChuong trinh sai dinh dang !");
	}

	getch();
	return 0;
}