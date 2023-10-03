//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

/*Function to count number of characters 
* to make s1 and s2 equal
* s1 : first string
* s2 : second string
*/
class Solution{
    public:
    int countChars(string s1, string s2){
        
        int count = 0;
        unordered_map<char,int>mpp;
        for(int i=0; i<s1.length(); i++){
            mpp[s1[i]]++;
        }
        for(int i=0; i<s2.length(); i++){
            mpp[s2[i]]--;
        }
        for(auto ch : mpp){
            if(abs(ch.second) > 0){
                count = count + abs(ch.second);
            }
        }
        return count;
        
    }
};

//{ Driver Code Starts.
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    
	    // taking string input
	    string s1, s2;
	    cin >> s1 >> s2;
	    Solution obj;
	    cout << obj.countChars(s1, s2) << endl;
	}
	
	return 0;
}
// } Driver Code Ends