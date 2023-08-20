//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        {
        stack<string> st;
        string ans = "";

        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] != '.')
            {
                ans = ans + S[i];
            }
            else
            {
                st.push(ans);
                ans = "";
            }
        }
        st.push(ans); // Push the last word

        string res = "";
        while (!st.empty())
        {
            string str = st.top();
            st.pop();
            res += str;
            if (!st.empty()) // Add a dot between words except for the last one
            {
                res += '.';
            }
        }
        return res;
    }
    }
};







         

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends