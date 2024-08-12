class Solution {
public:
    bool isSubsequence(string s, string t) {
        queue<char> q;
        for(char cs:t){
            q.push(cs);
        }
        
        for(int i=0;i<s.length();i++){
            while(!q.empty() && q.front()!=s[i]){
                q.pop();
            }
            if(!q.empty())
            q.pop();
            else return false;
            
        }
        return true;
    }
};