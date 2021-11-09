#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int size = sizeof(a)/sizeof(a[0]);
	for(int i = 0; i < size/2; i++)
	{
		int temp = a[i];
		a[i] = a[size - i - 1];
		a[size - i - 1] = temp;
		//if(a[i] == a[size - i - 1]) break;
	}
	for(int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}