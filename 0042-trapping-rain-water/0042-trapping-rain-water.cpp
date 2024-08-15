class Solution {
public:
    int trap(vector<int>& height) {
        int water=0;
        deque<int> leftmax,rightmax;
        int left=0,right=0;
        
        for(int i=0;i<height.size()-1;i++){
            leftmax.push_back(left);
            if(height[i]>left){
                left=height[i];
            }
        }
        
        for(int i=height.size()-1;i>=0;i--){
            rightmax.push_front(right);
            if(height[i]>right){
                right=height[i];
            }
        }
        for(int i=0;i<height.size();i++){
            int level = min(leftmax[i],rightmax[i]);
            if(level>height[i]){
                water += level - height[i];
            }
        }
        
        return water;
        
    }
};