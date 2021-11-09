#include<iostream>
using namespace std;

int main(){
	int arr[] = {1,2,3,4,5};
	int del = 3;
	for(int i = 0; i < 5; i++){
		if (arr[i] == del)
		{
			for(i; i < 5; i++){
				if(i == 4) break;
				arr[i] = arr[i+1];
			}
		}	
	}
	for(int i = 0; i < 4; i++){
		cout << arr[i] << " ";
	}
	return 0;
}