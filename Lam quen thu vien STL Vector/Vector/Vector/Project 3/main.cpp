#include <iostream>
#include <vector>
using namespace std;

void main()
{
	vector<int> arr;
	for(int i = 1; i <= 10; ++i)
	{
		arr.push_back(i);
	}

	cout << "\n\n\t\t* Xuat Theo Kieu Binh Thuong *\n";
	for(int i = 0; i < arr.size(); ++i)
	{
		cout << arr[i] << "   ";
	}

	cout << "\n\n\t\t* Xuat Theo iterator *\n";
	for(vector<int>::iterator it = arr.begin(); it != arr.end(); ++it)
	{
		cout << *it << "   ";
	}
}