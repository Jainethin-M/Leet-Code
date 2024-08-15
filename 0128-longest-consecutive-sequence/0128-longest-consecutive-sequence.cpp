class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;
        sort(nums.begin(),nums.end());
        int maxc=1;
        int maxn=1;
        
        for(int i=1;i<nums.size();i++){
            cout<<nums[i]<<' ';
            if(nums[i-1]+1==nums[i])maxc++;
            else if(nums[i-1]==nums[i])continue;
            else{
                maxn=max(maxc,maxn);
                maxc=1;
            }
        }
        return max(maxn,maxc);
    }
};