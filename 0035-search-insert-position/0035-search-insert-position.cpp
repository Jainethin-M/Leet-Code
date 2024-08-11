class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto it=nums.begin();
        for(int i=0;i<nums.size();i++){
            if(target <= *it)return i;
            it++;
        }
        return nums.size();
    }
};