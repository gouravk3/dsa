#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		multiset<long long> c;
		for(int i = 0; i < n; ++i)
		{
			long long candy;
			cin >> candy;
			c.insert(candy);
		}
		long long count = 0;
		for(int i = 0; i < k; ++i)
		{
			auto last_it = (--c.end());
			long long candy_ct = *last_it;
			count += candy_ct;
			c.erase(last_it);
			c.insert(candy_ct / 2);
		}
		cout << count << endl;
	}
	return 0;
}