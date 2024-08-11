class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        nums1.insert(nums1.begin(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());

        double ans;
        int len=nums1.size();
        
        if(len%2)ans=(double)(nums1[(len/2)]);
        else ans=(double)(nums1[(len/2)]+nums1[(len/2-1)])/2;
        return ans;
    }
};