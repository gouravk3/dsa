#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0 ; i < n; i++){
        for(int j = i+1; j < n; j++)
            if(arr[j] < arr[i])   swap(arr[j], arr[i]);
    }
}

int main(){
    int arr[] = {15, 1, 9, 10, 6, 12, 19, 5, 16, 3};
    selectionSort(arr, sizeof(arr)/sizeof(arr[0]));
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        cout << arr[i] << " ";
    }
    return 0;
}