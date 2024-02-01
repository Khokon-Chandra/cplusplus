#include <iostream>
using namespace std;

int main()
{

	int arr[4];
	int *ptr;
	ptr = arr;

	*ptr = 3;

	ptr++;

	*ptr = 5;

	ptr = &arr[3];

	*ptr = 10;

	ptr = arr;

	*(ptr + 2) = 8;

	for (int i = 0; i < 4; i++)
		cout << "Value at arr["<<i<<"] is : "<<arr[i]<<endl;

	return 0;
}