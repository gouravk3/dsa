#include<bits/stdc++.h>
using namespace std;

void move_neg(int arr[], int n)
{
	int pos = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] < 0) 
		{
			swap(arr[i], arr[pos]);
			pos++;
		}
	}
	for(int i = 0; i < n; i++) cout << arr[i] << " ";
}

int main()
{
	int ip[] = {1, 5, -9, -10, 12, -14, 15, 20, -89, 99, 120};
	int n = sizeof(ip)/sizeof(int);
	move_neg(ip, n);
	return 0;
}