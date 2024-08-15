class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int spt=0;
        int ept=numbers.size()-1;
        while(spt<ept){
            int sum=numbers[spt] + numbers[ept];
            if(sum == target){
                ans.push_back(spt+1);
                ans.push_back(ept+1);
                break;
            }
            else if(sum < target)spt++;
            else ept--;
        }
        return ans;
    }
};