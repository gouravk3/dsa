#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v = {2, 3, 5, 6, 7};
	for(int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	vector<int> ::iterator it;
	for(it = v.begin(); it != v.end(); ++it)
	{
		cout << (*(it)) << " ";
	}
	for(int value : v)
	{
		cout << value << " ";
	}
	cout << endl << endl;

	vector<pair<int, int> > v_p = {{1,2}, {3,4}, {5,6}};
	for(pair<int,int> value : v_p)
	{
		cout << value.first << " " << value.second << endl;
	}
	cout << endl;

	for(pair<int,int> &value : v_p)
	{
		value.first++;
		value.second++;
	}

	for(pair<int,int> value : v_p)
	{
		cout << value.first << " " << value.second << endl;
	}
	return 0;
}