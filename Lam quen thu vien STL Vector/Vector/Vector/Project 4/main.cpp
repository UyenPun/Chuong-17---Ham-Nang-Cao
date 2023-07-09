#include <iostream>
#include <vector>
using namespace std;

void XuatMang(vector<int> x)
{
	for(int i = 0; i < x.size(); ++i)
	{
		cout << x[i] << "   ";
	}
}

void main()
{
	vector<int> arr;
	for(int i = 1; i <= 10; ++i)
	{
		arr.push_back(i);
	}

	cout << "\nMang ban dau: \n";
	XuatMang(arr);
	
	arr.erase(arr.begin() + 2); // Dạng 1: Xóa phần tử tại vị trí 2.

	cout << "\nMang sau khi xoa phan tu tai vi tri: 2\n";
	XuatMang(arr);

	arr.erase(arr.begin() + 3, arr.begin() + 6); // Dạng 2: Xóa các phần tử từ vị trí 3 --> 5.
	cout << "\nMang sau khi xoa cac phan tu tu vi tri 3 --> 5\n";
	XuatMang(arr);

	arr.insert ( arr.begin() + 4, 69 ); // Dạng 1: Chèn giá trị 69 vào vị trí 4 trong mảng.
	cout << "\n\nMang sau khi them gia tri 69 vao vi tri 4\n";
	XuatMang(arr);

	arr.insert(arr.begin() + 2, 2, 300); // Dạng 2: Chèn giá trị 300 vào vị trí 2 trong mảng (chèn 2 lần).
	cout << "\n\nMang sau khi chen 2 lan gia tri 300 vao vi tri 2\n";
	XuatMang(arr);

	vector<int> arr_1;
	for(int i = 10; i >= 0; --i)
	{
		arr_1.push_back(i);
	}
	arr.insert(arr.begin() + 1, arr_1.begin() + 1, arr_1.begin() + 4); // Dạng 3: Chèn dãy các phần tử từ vị trí 1 đến vị trí 3 của vector arr_1 vào vị trí 1 trong vector arr.
	cout << "\n\nMang sau khi chen day cac phan tu tu vi tri 1 --> 3 trong vector arr_1 vao vi tri 1 trong vector arr\n";
	XuatMang(arr);

	 int myarray [] = { 501,502,503 };
	 arr.insert(arr.begin() + 2, myarray + 1, myarray + 3); // Dạng 4: Chèn dãy các phần tử từ vĩ trí 1 đến vị trí 2 của mảng myarray vào vị trí 2 trong vector arr.
	 cout << "\n\nMang sau khi chen day cac phan tu tu vi tri 1 --> 2 trong mang myarray vao vi tri 2 trong vector arr\n";
	 XuatMang(arr);

	 arr.clear(); // Xóa hết các phần tử trong vector.
	 cout << "\nSize: " << arr.size();
}