class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int total=0;
        set<char> jwl;
        for(char x: jewels)jwl.insert(x);
        for(char x: stones){
            if(jwl.count(x))total++;
        }
        return total;
    }
};