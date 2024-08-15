class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxa=0;
        int spt=0;
        int ept=height.size()-1;
        while(spt<ept){
            int cumax=min(height[spt],height[ept])*(ept-spt);
            maxa=max(maxa,cumax);
            if(height[spt]<=height[ept])spt++;
            else ept--;
            
        }
        return maxa;
    }
};