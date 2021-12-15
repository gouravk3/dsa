#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 1 ; i < n; i++){
        for(int j = 0; j < n-1; j++)
            if(arr[j] > arr[j+1])   swap(arr[j], arr[j+1]);
    }
}

int main(){
    int arr[] = {15, 1, 9, 10, 644, 12, 159, 5, 16, 3, 15, 155, 9, 10, 6, 0, 519, 5, 16, -311};
    bubbleSort(arr, sizeof(arr)/sizeof(arr[0]));
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        cout << arr[i] << " ";
    }
    return 0;
}