class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority;
        pair<int , int> max;
        map<int,int> mj;
        for(auto num : nums){
            mj[num]++;
        }
        max.first=0;
        max.second=0;
        
        for(const auto num : mj){
            if(max.second<num.second){
                max=num;
            }
        }
        return max.first;

    }
};