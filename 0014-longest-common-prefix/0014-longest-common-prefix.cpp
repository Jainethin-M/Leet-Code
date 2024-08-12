class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        sort(strs.begin(),strs.end());
        string fst=strs[0];
        string last=strs[strs.size()-1];
        for(int i=0;i<min(fst.size(),last.size());i++){
            if(fst[i]!=last[i])return ans;
            ans+=fst[i];
        }
        return ans;
    }
};