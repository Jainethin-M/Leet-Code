class Solution {
public:
    
    int maxNumberOfBalloons(string text) {
        map<char,int> gn;
        for(char x: text){
           gn[x]++;
        }
        return min(gn['b'],min(gn['a'],min(gn['l']/2,min(gn['o']/2,gn['n']))));


    }
};