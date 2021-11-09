#include<bits/stdc++.h>
using namespace std;
 int main(){
	map<int, multiset<string> > marks_map;
	int n;
	cin >> n;
	// for(int i = 0; i < n; i++){
	// 	int marks;
	// 	string name;
	// 	cin >> name >> marks;
	// 	marks_map[marks].insert(name);
	// }

	// auto cur_it = --marks_map.end();
	// while(true){
	// 	auto &students = (*cur_it).second;
	// 	int marks = (*cur_it).first;
	// 	for(auto student : students){
	// 		cout << student << " " << marks << endl;
	// 	}
	// 	if(cur_it == marks_map.begin()) break;
	// 	cur_it--;
	// }

	for(int i = 0; i < n; i++){
		int marks;
		string name;
		cin >> name >> marks;
		marks_map[-1*marks].insert(name);
	}

	for(auto &marks_students_pr : marks_map){
		auto &students = marks_students_pr.second;
		int marks = marks_students_pr.first;
		for(auto student : students){

			cout << student << " " << -1*marks << endl;
		}
	}
	return 0;
 }

 /*
 Test Case:
 3
 Eve 78
 Bob 99
 Alice 78
 */