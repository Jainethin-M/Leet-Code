class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string , vector<string> > anagrams;
        for(auto str : strs){
            string key = str;
            sort(key.begin(),key.end());
            anagrams[key].push_back(str);
        }
        for(const auto x: anagrams){
            ans.push_back(x.second);
        }
        return ans;
    }
};