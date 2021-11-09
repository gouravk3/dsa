#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m)
{
	cout << "Size: " << m.size() << endl;
	for(auto pr : m)
	{
		cout << pr.first << " " << pr.second << endl;
	}
}

int main()
{
	map<int, string> m;
	m[1] = "abc"; //O(log(n))
	m[5] = "cdc"; //we cannot use one key multiple time...if we use, it will overwite the existing value in that key
	m[3] = "acd";
	m.insert({4, "afg"}); //Inserting any thing in map will take log(n) time, where n is the size of map
	print(m); //O(log(n)) to access the map and to access the n elements is map it will take O(nlog(n))
	cout << endl;
	
	auto it = m.find(3);//if key(here, 3) is not found it will return m.end() // O(log(n))
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
	m.erase(3); // removes the pair with that key //O(log(n))
	print(m);

	cout << endl;
	m.clear(); // removes the pair with that key //O(log(n))
	print(m);
	return 0;
}