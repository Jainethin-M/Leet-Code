class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> str;
        int maxl=0,slow=0,fast=0,len=s.length();

        while(fast<len){
            str[s[fast]]++;
            while(str[s[fast]]>1){
                str[s[slow]]--;
                slow++;
            }
            fast++;
            maxl=max(maxl,(fast-slow));
        }
        return maxl;
    }
};