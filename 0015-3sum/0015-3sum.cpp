class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> se;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++)
        {
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=(nums[i]+nums[j]+nums[k]);
                if(sum == 0){
                    vector<int> temp={nums[i],nums[j],nums[k]};
                    se.insert(temp);
                    j++;k--;
                }
                else if(sum < 0)j++;
                else k--;


            }
        }
        for(auto x:se){
            ans.push_back(x);
        }
        return ans;
    }
};