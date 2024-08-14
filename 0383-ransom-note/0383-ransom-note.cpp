class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        multiset<char> mag;
        for(char x: magazine)mag.insert(x);
        for(char x: ransomNote){
            if(mag.count(x)==0)return false;
            else {
                auto foundit=mag.find(x);
                if(foundit!=mag.end()){
                    mag.erase(foundit);
                }
            }
        }
        return true;
    }
};