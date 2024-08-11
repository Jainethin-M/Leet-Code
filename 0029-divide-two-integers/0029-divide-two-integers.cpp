class Solution {
public:
    int divide(int dividend, int divisor) {
        long int a=dividend,b=divisor;
        if(a/b>(int)INT_MAX)return (int)INT_MAX;
        else if(a/b<(int)INT_MIN)return (int)INT_MIN;
        else    return dividend/divisor;
    }
};