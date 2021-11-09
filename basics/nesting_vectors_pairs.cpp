#include<bits/stdc++.h>
using namespace std;

void printVector(vector<pair<int, int> > v)
{
	cout << "Size: " << v.size() << endl;
	for(int i = 0; i < v.size(); ++i)
	{
		cout << v[i].first << " " << v[i].second << endl; //v[i] is pair here, as declared in main function
	}
	cout << endl;
}
//Vectors are dynamic arrays
int main()
{
	vector<pair<int, int> > eg = {{1,2}, {2,3}, {4,5}}, v;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		v.push_back({x,y}); //or we can use 'make_pair(x,y)'
	}
	printVector(v);
	return 0;
}