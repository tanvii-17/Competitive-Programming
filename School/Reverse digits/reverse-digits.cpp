//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    long long int rev = 0;
		    while(n > 0){
		        int digit = n % 10;                     //2
		        rev = rev * 10 + digit;             // rev = 2
		        n = n / 10;
		    }
		    return rev;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int n;
    	cin >> n;
    	Solution ob;
    	long long int  ans = ob.reverse_digit(n);
    	cout << ans <<"\n";
    }
	return 0;
}
// } Driver Code Ends