class Solution {
public:
    bool isPalindrome(string s) {
        int spt=0;
        int ept=s.size()-1;
        while(spt<ept){
            if(!iswalnum(s[spt]))spt++;
            else if(!iswalnum(s[ept]))ept--;
            else{
                if((isdigit(s[spt]) || isdigit(s[ept]) )&& s[spt]!=s[ept]){
                    return false;
                }
                else if(tolower(s[spt])!=tolower(s[ept])){
                    return false;
                }
                else {
                    spt++;
                    ept--;
                }
            }
        }
        return true;
    }
};