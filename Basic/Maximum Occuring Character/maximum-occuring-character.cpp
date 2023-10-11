//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        sort(str.begin(), str.end());
        unordered_map<char,int>mpp;
        int cnt = 0;
        char ans;
        for(int i=0; i<str.length(); i++){
            mpp[str[i]]++;
        
        if(cnt < mpp[str[i]]){
            ans = str[i];
            cnt = mpp[str[i]];
        }
        }
        return ans;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends