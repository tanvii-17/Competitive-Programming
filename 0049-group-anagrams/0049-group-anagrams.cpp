class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string> >mpp;

        for(auto i:strs){
            string temp = i;
            sort(i.begin(), i.end());
            mpp[i].push_back(temp);
        }
        for(auto i:mpp){
            vector<string>temp = i.second;
            ans.push_back(temp);
        }
        return ans;
    }
};