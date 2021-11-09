#include<bits/stdc++.h>
using namespace std;

int main(){
	unordered_set<string> s;
	s.insert("abc"); // O(1) // due to use of hash tables
	s.insert("xyz");
	s.insert("lcm");
	s.insert("hcf");
	auto it = s.find("lcm");
	if(it != s.end())
	{
		s.erase(it);
	}
	for(auto value : s)
	{
		cout << value << endl;
	}
	return 0;
}