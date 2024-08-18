class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int psum=0;
        for(int i=0;i<k;i++)psum+=nums[i];
        int sum =psum;
        
        for(int i=k;i<nums.size();i++){
            int csum = (psum-nums[i-k])+nums[i];
            // cout<<psum<<' '<<nums[i-k]<<' '<<csum<<endl;
            sum = max(sum,csum);
            psum=csum;
            
        }
        return (double)sum/k;
    }
};