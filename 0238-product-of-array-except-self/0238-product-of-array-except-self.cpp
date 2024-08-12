class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long int prd=1;
        vector<int> ans;
        int zero=0;
        for(int x: nums){
            if(x==0)zero++;
            else prd*=x;
        }
        if(zero>1)ans.insert(ans.begin(),nums.size(),0);
        else if(zero==1){
            for(int x:nums){
                if(x==0)ans.push_back(prd);
                else ans.push_back(0);
            }

        }
        else {
            for(int x:nums)ans.push_back(prd/x);
        }
        return ans;
    }
};