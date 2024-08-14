class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        int a[26];
        for(char x: s){
            a[x-'a']++;
        }
        for(char x: t){
            if(a[x-'a']==0)return false;
            else a[x-'a']--;
        }
        return true;
    }
};