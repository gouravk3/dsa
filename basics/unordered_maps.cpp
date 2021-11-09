#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int,string> &m)
{
	cout << "Size: " << m.size() << endl;
	for(auto pr : m)
	{
		cout << pr.first << " " << pr.second << endl;
	}
}

int main()
{
	unordered_map<int, string> m;
	m[1] = "abc"; //O(1) // due to use of hash tables
	m[5] = "cdc"; 
	m[3] = "acd";
	m.insert({4, "afg"}); 
	print(m);
	cout << endl;
	
	auto it = m.find(3);//if key(here, 3) is not found it will return m.end() // O(1)
	if(it == m.end())
	{
		cout << "Key not found!" << endl;
		m.erase(it);
	}
	else
	{
		cout << it->first << " " << it->second << endl;
	}

	cout << endl;
	m.erase(3); // removes the pair with that key //O(1)
	print(m);

	cout << endl;
	m.clear(); // removes the pair with that key //O(1)
	print(m);
	return 0;
}