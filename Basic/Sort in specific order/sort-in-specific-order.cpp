//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        vector<long long>v1;
        vector<long long>v2;
        for(int i=0; i<n; i++){
            if(arr[i] % 2 != 0){
                v1.push_back(arr[i]);
            }else{
                v2.push_back(arr[i]);
            }
        }
        sort(v1.begin(), v1.end());
        reverse(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        int j=0;
        
        for(long long i=0;i<v1.size();i++){
            arr[i]=v1[i];
            j++;
        }
        for(int i=0;i<v2.size();i++){
            arr[j]=v2[i];
            j++;
        }
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends