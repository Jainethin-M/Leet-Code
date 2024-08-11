class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.empty())return {-1,-1};
        vector<int> output;
        auto it=nums.begin();
        for(int i=0;i<nums.size();i++){
            if(*it==target){
                output.push_back(i);
                break;
            }it++;
        }
        it=nums.end()-1;
        for(int i=nums.size()-1;i>=0;i--){
            if(*it==target){
                output.push_back(i);
                break;
            }it--;
        }
        if(output.empty()){
            output.push_back(-1);
            output.push_back(-1);
        }
        return output;
    }
};