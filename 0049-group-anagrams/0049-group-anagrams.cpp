class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<string> temp = strs;
        for(string &x : temp){
            sort(x.begin(),x.end());            
        }
        bool visited[strs.size()];
        for(int i=0;i<strs.size();i++)visited[i]=false;
        for(int i=0;i<strs.size();i++){
            if(visited[i])continue;
            vector<string> cust;
            cust.push_back(strs[i]);
            
            for(int j=i+1;j<strs.size();j++){
                if(!visited[j] && temp[i]==temp[j]){
                    cust.push_back(strs[j]);
                    visited[j]=true;
                }
            }
            ans.push_back(cust);
        }
        return ans;
    }
};