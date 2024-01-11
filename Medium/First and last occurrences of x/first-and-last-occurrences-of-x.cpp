//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        vector<int>ans;
        int firstOcc = -1;
        for(int i=0; i<n; i++){
            if(arr[i] == x){
                firstOcc = i;
                break;
            }
        }
        
        int lastOcc = -1;
        for(int i=n-1; i>= 0; i--){
            if(arr[i] == x){
                lastOcc = i;
                break;
            }
        }
        
        ans.push_back(firstOcc);
        ans.push_back(lastOcc);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends