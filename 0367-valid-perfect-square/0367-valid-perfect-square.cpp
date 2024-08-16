class Solution {
public:
    bool isPerfectSquare(int num) {
        float sr=sqrt(num);
        cout<<sr;
        if((int)sqrt(num)==sqrt(num))return true;
        else return false;
    }
};