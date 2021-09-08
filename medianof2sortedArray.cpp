class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        for(int i=0;i<nums2.size();i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        double l=0;
        if(nums1.size()%2==0)
        {
            l=nums1[nums1.size()/2]+nums1[nums1.size()/2-1];
            l/=2;
            return l;
        }
        else{
            return nums1[nums1.size()/2];
        }
    }
};