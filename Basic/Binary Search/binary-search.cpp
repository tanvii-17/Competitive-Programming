//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int start = 0;
        int end = n-1;
        int middle = 0;
        
        while(start <= end){
            middle = (start + end) /2; 
            
            if(arr[middle] == k){
                return middle;
            }
            else if(arr[middle] > k){
                end = middle-1;
            }
            else if(arr[middle] < k)
            {
                start = middle+1; 
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends