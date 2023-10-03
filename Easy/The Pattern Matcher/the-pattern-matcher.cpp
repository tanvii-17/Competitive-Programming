//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void follPatt(string s)
    {
       int cnt = 0;
       bool valid = true;
       
       for(int i=0; i<s.length();){
           while(s[i] == 'x'){
               cnt ++;
               i++;
           }
           while(s[i] == 'y'){
               cnt --;
               i++;
           }
           if(cnt != 0){
               valid = false;
               break;
           }
       }
       if(cnt == 0 && valid == true){
               cout << '1';
           }
           else{
               cout << '0';
           }
       
       cout<<endl;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;

	while(t--)
	{
	    
	    string s;
	    cin>>s;
	    Solution obj;
	    //function call
	    obj.follPatt(s);
	   
	}
	return 0;
}
// } Driver Code Ends