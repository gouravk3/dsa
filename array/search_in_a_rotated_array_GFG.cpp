// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int min_index(int arr[],int n)
    {
        int low = 0, high = n-1;
	    while(low <= high)
	    {
	        if(arr[low]<=arr[high]) return low;
            int mid = low + (high - low)/2;
            int prev=(mid+n-1)%n;
            int next=(mid+1)%n;
	        
	        if(arr[mid] < arr[prev] && arr[mid] <= arr[next]) return mid;
	        
	        else if(arr[mid] >= arr[low])
	        {
	            low = mid + 1;
	        }
	        else if(arr[mid] <= arr[high])
	        {
	            high = mid - 1;
	        }
	    }
	    return 0;
    }
    
    int bs(int arr[], int low, int high, int target)
    {
	    while(low <= high)
        {
            int mid = low + (high - low) / 2;
            if(arr[mid] == target) return mid;
            else if(arr[mid] < target) low = mid + 1;
            else if(arr[mid] > target) high = mid - 1;         
        }
        return -1;
    }
    
    int search(int A[], int l, int h, int key){
    //complete the function here
    int n = h+1;
    int index = min_index(A, n);
    int bs1 = bs(A, 0, index - 1, key);
    int bs2 = bs(A, index, n - 1, key);
    if(bs1 != -1) return bs1;
    else return bs2;
    }
};

// { Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}  // } Driver Code Ends

/*
Test Case1:
4
3 5 1 2
6
op: -1

Test Case2:
9
5 6 7 8 9 10 1 2 3
10

op: 5
*/