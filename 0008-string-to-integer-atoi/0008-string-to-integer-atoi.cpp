class Solution {
public:
    int myAtoi(string s) {
        long int ans=0;
        bool sign=true;
        bool read=false;
        for(int i=0;i<s.length();i++){
            if(s.at(i)=='-' ||s.at(i)=='+' || s.at(i)==' ' )
            {   
                if(read)break;
                else {
                    if(ans==0 && s.at(i)=='-')sign=false;
                    if(s.at(i)=='+'||s.at(i)=='-')
                    read=true;
                }

                continue;
            }
            else if((s.at(i)>='a' && s.at(i)<='z') || (s.at(i)>='A' && s.at(i)<='Z')||s.at(i)=='.'){break;}
            else if(s.at(i)=='0'){
                if(ans>0)ans*=10;
                read=true;
            }
            else{
                ans=ans*10 + (s.at(i)-48);
                read=true;
            }
            if(ans>2147483648 &&sign==false){
                return -2147483648;
            }else if(ans>2147483647 && sign)return 2147483647;
        }
        return sign?ans:-ans;
    }
};