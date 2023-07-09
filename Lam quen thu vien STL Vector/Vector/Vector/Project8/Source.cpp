#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void NhapMang(vector<vector<int>> &a)
{
	int dong;
	cout << "\nNhap vao so dong: ";
	cin >> dong;
	a.resize(dong);

	for(int i = 0; i < dong; i++)
	{
		int cot;
		cout << "\nNhap vao so cot cua dong " << i << ": ";
		cin >> cot;
		a[i].resize(cot);
		for(int j = 0; j < cot; j++)
		{
			cout << "\nNhap vao a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}

void XuatMang(vector<vector<int>> a)
{
	int dong = a.size();

	for(int i = 0; i < dong; i++)
	{
		int cot = a[i].size();
		for(int j = 0; j < cot; j++)
		{
			cout << setw(6) << a[i][j];
		}
		cout << endl;
	}
}

int main()
{
	vector<vector<int>> a; // Khai báo vector 2 chiều.

	NhapMang(a);
	XuatMang(a);

	system("pause");
	return 0;
}
