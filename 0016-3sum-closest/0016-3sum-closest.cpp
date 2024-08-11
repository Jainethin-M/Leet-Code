class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int c=INT_MAX;
        long int close=c;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int j=i+1,k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==target)return target;
                else if(sum<target) j++;
                else k--;
                
                if(abs(target-sum)<abs(close-target))close=sum;

            }
        }
        return close;
    }
};