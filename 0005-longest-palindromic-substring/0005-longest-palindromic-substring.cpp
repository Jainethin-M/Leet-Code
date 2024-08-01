class Solution {
public:
    string longestPalindrome(string s) {
        string res="";
        for(int i=0;i<s.length();i++){
            string temp=helper(s,i,i);
            if(temp.length()>res.length())res=temp;
            temp=helper(s,i,i+1);
            if(temp.length()>res.length())res=temp;
        }
        return res;
    }
    string helper(string s,int l,int r){
        while(l>=0 && r<s.length() &&s[l]==s[r]){
            l--;r++;
        }
        return s.substr(l+1,r-1-l);
    }
};