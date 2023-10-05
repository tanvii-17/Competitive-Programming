//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    private:
    void solve(string S, vector<string> &ans, int index ){
        //base case
        if(index >= S.size()){
            ans.push_back(S);
            return;
        }
        
        for(int j=index; j<S.size(); j++){
            swap(S[index], S[j]);
            solve(S, ans, index+1);
            //backtrack
            swap(S[index], S[j]);
        }
    }
    public:
    vector<string> permutation(string S)
    {
        vector<string>ans;
        int index = 0;
        solve(S, ans, index);
        sort(ans.begin() , ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends