#include<bits/stdc++.h>
using namespace std;

void arrange(int a[], int n)
{
	int low = 0, mid = 0, high = n-1;
	while(mid <= high)
	{
		if(a[mid] == 0)
		{
			swap(a[mid], a[low]);
			low++; 
			mid++;
		}
		else if(a[mid] == 2)
		{
			swap(a[high], a[mid]);
			high--;
		}
		else{mid++;}
	}
	for(int i = 0; i < n; i++) cout << a[i] << " ";
}

int main()
{
	int ip[] = {0,1,2,0,1,2};
	int n = sizeof(ip)/sizeof(int);
	arrange(ip, n);
	return 0;
}