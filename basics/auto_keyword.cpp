#include<bits/stdc++.h>
using namespace std;

int main()
{
	auto a = 1.0;
	cout << a;
	vector<int> v = {2, 3, 5, 6, 7};
	for(int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	//vector<int> ::iterator it; //can be removed if used auto in loop... for which it is used
	for(auto it = v.begin(); it != v.end(); ++it)
	{
		cout << (*(it)) << " ";
	}
	for(int value : v)
	{
		cout << value << " ";
	}
	cout << endl;

	vector<pair<int, int> > v_p = {{1,2}, {3,4}, {5,6}};
	for(auto value : v_p)
	{
		cout << value.first << " " << value.second << endl;
	}

	return 0;
}