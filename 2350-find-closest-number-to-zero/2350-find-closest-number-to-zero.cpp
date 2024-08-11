class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int close=INT_MAX,found=INT_MIN;        
        for(int x: nums){
            if(abs(x-0)<close || abs(x-0)==close && x>found){
                close=abs(x);
                found=x;
            }
        }
        return found;
    }
};