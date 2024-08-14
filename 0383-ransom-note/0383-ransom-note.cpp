class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int a[26]={0};
        for(char x: magazine){
            a[x-'a']++;
        }
        for(char x: ransomNote){
            if(a[x-'a']==0)return false;
            else a[x-'a']--;
        }
        return true;
    }
};