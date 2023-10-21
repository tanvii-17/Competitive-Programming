//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        int s=0; int e=x;
        long long int m= s+(e-s)/2;
        int ans=-1;
        
        while(s<=e){
            
            if(m*m==x) return m;
            else if(m*m>x) e=m-1;
            else if (m*m<x){
                ans=m;
                s=m+1;
        } 
        m= s+(e-s)/2;
        }
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
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends