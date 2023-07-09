#include <iostream>
#include <vector>
using namespace std;

void NhapMang(vector<int> &a, int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "\nNhap vao a[" << i << "] = ";
		cin >> a[i];
		
		// Cách 2: Dùng cách này thì không cần resize trước.
		/*int x;
		cin >> x;
		a.push_back(x);*/
	}
}

void XuatMang(vector<int> a)
{
	int size = a.size(); // Lấy ra số lượng các phần tử vector đang chứa bên trong.

	for(int i = 0; i < size; i++)
	{
		cout << a[i] << "   ";
	}
}

int main()
{
	vector<int> a; // Khai báo.
	int n; // Số lượng.
	cout << "\nNhap vao so luong: ";
	cin >> n;

	a.resize(n);

	NhapMang(a, n);
	XuatMang(a);

	system("pause");
	return 0;
}
