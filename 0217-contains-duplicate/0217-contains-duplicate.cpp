class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> gn;
        for(int x: nums){
            if(gn.count(x)==0){
                gn.insert(x);
            }else return true;
        }
        return false;
    }
};