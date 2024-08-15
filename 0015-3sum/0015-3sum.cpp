class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        set<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int target=0;
        for(int i=0;i<nums.size()-1;i++){
            int spt=i+1;
            int ept=nums.size()-1;
            while(spt<ept){
                int sum=nums[i]+nums[spt]+nums[ept];
                if(sum == target){
                    vector<int> cu={nums[i],nums[spt],nums[ept]};
                    ans.insert(cu);
                    spt++;ept--;
                }
                else if(sum < target)spt++;
                else ept--;
            }
        }
        for(auto x: ans){
            res.push_back(x);
        }
        return res;
    }
};