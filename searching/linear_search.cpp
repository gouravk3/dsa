#include<iostream>
using namespace std;

int l_search(int a[], int n, int key)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] == key) return i + 1;
	}
	return -1;
}

int main()
{
	int arr[] = {1, 5, 9 , 3, 10, 15, 12, 14};
	int n = sizeof(arr)/sizeof(int), result;
	int search_for = 101;
	result = l_search(arr, n, search_for);
	cout << result;
	return 0;
}
