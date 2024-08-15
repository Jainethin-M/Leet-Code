class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int plot=0;
        for(int i=0;i<nums.size();i++){
            if(count==0)plot=nums[i];
            if(nums[i]==plot)count++;
            else count--;
        }
        return plot;

    }
};