//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        unordered_set<char>st;
        for(int i=0; i<s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                int val = int(s[i])-32;      //to convert lowercase to uppercase -32
                st.insert(char(val));
            }
            if(s[i] >= 'A' && s[i] <= 'Z'){
                st.insert(s[i]);
            }
        }
        return(st.size() == 26);
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends