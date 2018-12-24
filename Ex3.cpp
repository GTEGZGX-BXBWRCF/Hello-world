#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
	const int size = 10;
	int arr[size];
	for (int j = 0; j < size; ++j)
		arr[j] = 1;
	for (int n = 2; n <= sqrt(size); ++n)
	{
		for (int k = 2; k < size; ++k)
		{
			if (k%n == 0)
				arr[k] = 0;
		}
	}
	for (int i = 2; i < size; ++i)
	{
		if (arr[size])
			cout << size << ' ';
	}
	system("pause");
	return 0;
}