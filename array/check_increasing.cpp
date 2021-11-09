#include<iostream>
using namespace std;

int main(){
	int arr[] = {1,2,7,3,4,5};
	int max = 0;
	for(int i = 0; i < 6; i++){
		if(max < arr[i]){
			max = arr[i];
		}
		if(max > arr[i]){
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}