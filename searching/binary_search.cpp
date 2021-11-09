#include<bits/stdc++.h>
using namespace std;

int b_search(int arr[], int n, int key)
{
	int s = 0;
	int e = n;
	while (s <= e)
	{
		int mid = (s+e)/2;
		if(arr[mid] == key) return mid;

		else if(arr[mid] > key)
		{
			e = mid - 1;
		}

		else
		{
			s = mid + 1;
		}
	}
	return -1;
}

int main()
{
	int arr[] = {1, 5, 9 , 10, 12, 14, 15, 20, 89, 99, 120};
	int n = sizeof(arr)/sizeof(int), result;
	int key = 10;
	result = b_search(arr, n, key);
	cout << result;
	return 0;
}