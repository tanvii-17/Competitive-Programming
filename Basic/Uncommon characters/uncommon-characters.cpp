//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
             unordered_map<char, int> s1;
            unordered_map<char, int> s2;
            
            for(int i = 0; i < A.size(); i++) s1[A[i]]++;
            for(int i = 0; i < B.size(); i++) s2[B[i]]++;
            
            // using for loops to check unique characters and storing them in a set
            set<char> s;
            for(int i = 0; i < A.size(); i++){
                if(s2.find(A[i]) == s2.end()){
                    s.insert(A[i]);
                }
            }
            for(int i = 0; i < B.size(); i++){
                if(s1.find(B[i]) == s1.end()){
                    s.insert(B[i]);
                }
            }
            
            // iterating through the set and concatinating it to a string. Also check if set is empty
            string ans = "";
            if(s.empty()) return "-1";
            for(auto i: s){
                ans+= i;
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
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends