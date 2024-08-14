class Solution {
public:
    multiset<char> gn;
    bool remo(char x){
        if(gn.count(x)){
           gn.erase(gn.find(x));
           return true;
        }else return false;


    }
    int maxNumberOfBalloons(string text) {
        if(text.size()<7)return 0;
        int baloon=0;
        for(char x: text)gn.insert(x);        
        while(1){
            if(remo('b') && remo('a') && remo('l') && remo('l') && remo('o') && remo('o') && remo('n'))
                baloon++;
            else break;
        }
        return baloon;

    }
};