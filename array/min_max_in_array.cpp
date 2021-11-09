#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7, -8, 9, 10};
	int size = sizeof(a)/sizeof(a[0]);
	int max = a[0], min = a[0];
	for(int i = 1; i < size; i++)
	{
		if(a[i] > max) max = a[i];
		if(a[i] < min) min = a[i];
	}
	cout << "Maximum Element is: " << max << endl << "Minimum Element is: " << min << endl;
	return 0;
}