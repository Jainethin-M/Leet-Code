class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sq;
        for(auto x : nums){
            sq.push_back(x*x);
        }
        sort(sq.begin(),sq.end());
        return sq;
    }
};