//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int search(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        int s = l , e = h ;
        while(s<=e){
            int m = (s+e)/2 ;
            if( A[m] == key){
                return m ;
            }
            else if( A[m]>= A[s]){
                // left side is sorted so check if key lies in left side or not
                if(key>= A[s] and key< A[m]) e=m-1 ;
                else s = m+1 ;
            }
            else{
                // right side is sorted so check if key lies in right side or not 
               if(key <= A[e] and key >  A[m]) s = m +1;
               else e = m -1;
            }
        }
        return -1 ;
    }
};

//{ Driver Code Starts. 
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
}
// } Driver Code Ends