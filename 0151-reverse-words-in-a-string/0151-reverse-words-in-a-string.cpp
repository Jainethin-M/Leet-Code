class Solution {
public:
    string reverseWords(string s) {
        int len = s.length();
        string currWord = "";
        for(int i = len-1; i >= 0; i--){
            if(s[i] != ' '){
                currWord = s[i] + currWord;
            }
            else{
                if(currWord != ""){
                    s += " " + currWord;
                }
                currWord = "";
            }
        }
        if(currWord != "")
            s += " " + currWord;
        return s.substr(len+1);
    }
};