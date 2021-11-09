#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s)
{
	for(string value : s)
	{
		cout << value << endl;
	}
	// for(auto it = s.begin(); it != s.end(); ++it)
	// {
	// 	cout << *it << endl;
	// }
}

int main()
{
	set<string> s;
	s.insert("abc");//log(n)
	s.insert("zsdf");
	s.insert("bcd");
	auto it = s.find("abc"); // abc doesn't exixst it will return end // O(log(n))
	if(it != s.end())
	{
		s.erase(it);
	}
	print(s);

	return 0;
}