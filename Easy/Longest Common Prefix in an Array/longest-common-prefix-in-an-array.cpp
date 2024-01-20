//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        int cnt = 0, flag = 0, min = 1000;
        string S;
        for(int i=0; i<N; i++){
            int len = arr[i].length();
            if(len < min){
                min = len;
                S = arr[i];
            }
        }
        for(int i=0; i<min; i++){
            for(int j=0; j<N; j++){
                if(arr[j][i] != S[i]){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1) break;
            cnt++;
        }
        if(cnt == 0) return "-1";
        else return S.substr(0, cnt);
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends