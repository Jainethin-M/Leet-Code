class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=nums.size();
        int slow=0,fast=0,sum=0;
        for(int x:nums)sum+=x;
        if(sum<target)return 0;
        else sum=0;
        while(fast<nums.size()){
            sum+=nums[fast];
            // if(sum>=target)
            while(sum>=target){
                ans=min(ans,fast-slow);
                sum-=nums[slow];
                slow++;
            }
            fast++;
        }
        
        return ans+1;   
    }
};