#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 1 ; i < n; i++){
        int curr = arr[i];
        int j = i - 1;
        while(arr[j] > curr && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
    }
}

int main(){
    int arr[] = {15, 1, 9, 10, 644, 12, 159, 5, 16, 3, 15, 155, 9, 10, 6, 0, 519, 5, 16, -311};
    insertionSort(arr, sizeof(arr)/sizeof(arr[0]));
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        cout << arr[i] << " ";
    }
    return 0;
}