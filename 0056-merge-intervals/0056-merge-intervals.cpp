class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        auto vit=intervals.begin();
        ans.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            if(ans.back().back()>=intervals[i].front())
            {
                ans.back().back()=max(intervals[i].back(),ans.back().back());
            }
            else{
                ans.push_back(intervals[i]);
            }
        
        }
        // printf("%d",ans.back().back());
        return ans;
    }
};