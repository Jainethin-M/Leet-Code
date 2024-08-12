class Solution {
public:
    int valueInt(char c){
        switch(c){
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
        }
        return 0;
    }
    int romanToInt(string s) {
        int res=0;
        int len=s.length();
        for(int i=0;i<len;i++){
            int cval;
            if(s[i]=='I'&&(s[i+1]=='V'||s[i+1]=='X')||
                s[i]=='X'&&(s[i+1]=='L'||s[i+1]=='C')||
                s[i]=='C'&&(s[i+1]=='D'||s[i+1]=='M')){
                cval=valueInt(s[i+1])-valueInt(s[i]);
                i++;
            }else{
                cval=valueInt(s[i]);
            }
            res+=cval;
        }
        return res;
    }

};