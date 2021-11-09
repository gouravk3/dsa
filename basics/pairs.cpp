#include<bits/stdc++.h>
using namespace std;

int main()
{
	pair<int,string> p;
	p = make_pair(4, "abc");
	cout << p.first << " " << p.second << endl;
	p = {2, "abc"};
	cout << p.first << " " << p.second << endl;
	pair<int, string> p1 = p; //Copies the p to p1, later the value does not change... to change value we need to use &
	p1.first = 8;
	cout << p.first << " " << p.second << endl;
	pair<int, string> &p2 = p; //& Just copies the refrence of p to p2, later the values of p2 can be changed
	p2.first = 10;
	cout << p.first << " " << p.second << endl;
	int a[] = {1,2,3};
	int b[] = {2,3,4};
	pair<int,int> p_array[3];
	p_array[0] = {1,2};
	p_array[1] = {2,3};
	p_array[2] = {3,4};
	for(int i = 0; i < 3; i++)
	{
		cout << p_array[i].first << " " << p_array[i].second <<endl;
	}
	
	swap(p_array[0], p_array[2]);
	for(int i = 0; i < 3; i++)
	{
		cout << p_array[i].first << " " << p_array[i].second << endl;
	}
	return 0;
}