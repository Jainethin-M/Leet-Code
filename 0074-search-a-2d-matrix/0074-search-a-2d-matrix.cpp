class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0,r=matrix.size()-1;
        vector<int> row;
        while(l<=r){
            int m=l+(r-l)/2;
            
            if(matrix[m].front() <= target && matrix[m].back() >= target){
                row =matrix[m];
                break;
            }else if(matrix[m].front()>target)r=m-1;
            else l=m+1;
        }
        l=0;r=row.size()-1;
        while(l<=r){
            int m=l+(r-l)/2;
            if(row[m]==target)return true;
            else if(row[m]<target)l=m+1;
            else r=m-1;
        }
        return false;
    }
};