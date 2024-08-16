class Solution {
public:
    bool isPerfectSquare(int num) {
        int m=1;
        while(num>0){
            num-=m;
            m+=2;
            if(!num)return true;;
        }
        return false;
        
    }
};