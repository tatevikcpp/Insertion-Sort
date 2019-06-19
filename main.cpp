#include <iostream>

using namespace std;


void InsertionSort(int *arr, int n)
{
	int i, key, j;
	for (i = 1; i < n; ++i)
	{
		key = arr[i];
		j = i - 1;

		
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void PrintArr(int *arr, int n)
{
	int i;
	for (i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << endl;
}


int main()
{
	int arr[] = { 7, 11, 5, 14, 8, 57, 17};
	int n = sizeof(arr) / sizeof(arr[0]);

	InsertionSort(arr, n);
	PrintArr(arr, n);

}
