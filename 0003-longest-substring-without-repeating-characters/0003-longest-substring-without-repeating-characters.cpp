class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int a=0;
        unordered_map<char,int>mp;
        int i=0,j=0,n=s.size();
        while(j<n){
            mp[s[j]]++;
            while(mp[s[j]]>1)
            mp[s[i++]]--;
            a=max(a,j-i+1);
            j++;
        }
        return a;
    }
};