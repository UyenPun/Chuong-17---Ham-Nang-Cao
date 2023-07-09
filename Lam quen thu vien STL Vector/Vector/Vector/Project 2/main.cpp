#include <iostream>
#include <vector>
using namespace std;

void NhapMang(vector<int> &arr) // vector chứa các số nguyên có kiểu dữ liệu int.
{
	// Vòng lặp vô tận.
	while(true)
	{
		int Value;
		cout << "\nNhap so nguyen duong can them vao mang (nhap so am de ket thuc): ";
		cin >> Value;

		// Nếu gặp số âm thì thoát khỏi vòng lặp.
		if(Value < 0)
		{
			break;
		}
		arr.push_back(Value); // Những giá trị thỏa thì thực hiện đưa vào cuối mảng.
	}
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
	vector<int> arr; // vector kiểu dữ liệu số nguyên: int.
	NhapMang(arr);
	arr.pop_back(); // Xóa phần tử cuối cùng ra khỏi mảng.
	XuatMang(arr);
	int x = arr.front();
	cout << "\nPhan tu dau tien la: " << arr.front();
	cout << "\nPhan tu cuoi cung la: " << arr.back();
	cout << "\nKich thuoc that dang luu tru (capacity): " << arr.capacity();
	cout << "\nKich thuoc toi da co the luu tru (max_size): " << arr.max_size();
}