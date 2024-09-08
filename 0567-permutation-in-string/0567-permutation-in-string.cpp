class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        int len=s1.length(),slow=0;
        while(len+slow<=s2.length()){
            string s=s2.substr(slow,len);
            sort(s.begin(),s.end());
            
            if(s==s1)return true;
            slow++;   
        }
        return false;
    }
};