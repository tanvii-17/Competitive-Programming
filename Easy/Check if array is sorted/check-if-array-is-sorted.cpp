//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Back-end complete function template for C++

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // Array has one or no element
        if (n == 0 || n == 1) return true;

        for (int i = 1; i < n; i++)
            // Unsorted pair found
            if (arr[i - 1] > arr[i]) return false;

        // No unsorted pair found
        return true;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        bool ans = ob.arraySortedOrNot(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends