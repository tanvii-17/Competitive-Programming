//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
 vector<long long int> dp;
    int mod= 1000000007;
    long long int count(int n)
    {
        if(n==1|| n==2)    return n;
        
        if(dp[n]!=-1)   return dp[n];
        
        long long int ans = count(n-1)%mod + ((n-1)*((count(n-2))%mod))%mod;
        
        return dp[n] = ans%mod; 
    
    }
    int countFriendsPairings(int n) 
    { 
        dp.assign(n+1, -1);
        return count(n);
    }
};    
 

//{ Driver Code Starts.
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout <<ob.countFriendsPairings(n); 
    	cout<<endl;
    }
} 

// } Driver Code Ends