#include <iostream>
#include <vector>
using namespace std;

void NhapMang(vector<int> &arr, int &n) // vector chứa các số nguyên có kiểu dữ liệu int.
{
	// Nhập số lượng phần tử.
	do{
		cout << "\nNhap vao so luong phan tu: ";
		cin >> n;
		if(n <= 0)
		{
			cout << "\nSo luong phan tu phai > 0. Xin kiem tra lai!";
		}
	}while(n <= 0);

	// Cấp phát bộ nhớ cho vector.
	arr.resize(n); // <=> arr.resize(n, 0);
}

void XuatMang(vector<int> arr)
{
	for(int i = 0; i < arr.size(); ++i) // Dùng hàm size để lấy kích thước mảng hiện hành.
	{
		cout << arr.at(i) << "   "; // <=> cout << arr[i] << "   ";
	}
}

void main()
{
	int n;
	vector<int> arr; // vector kiểu dữ liệu số nguyên: int.
	NhapMang(arr, n);
	XuatMang(arr);
}