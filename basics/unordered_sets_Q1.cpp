/*
Given N strings and Q queries in each query you are given a string 
print 'yes' if string is present else print 'no'.

N <= 10^6
|S| <= 100
Q <= 10^6
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	unordered_set<string> s;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		s.insert(str);
	}
	int x;
	cin >> x;
	for(int i = 0; i < x; i++)
	{
		string query;
		cin >> query;
		auto it = s.find(query);
		if(it != s.end())
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
	return 0;
}