class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         for(int i=0;i<nums2.size();i++)
        {
        nums1.push_back(nums2[i]);
        }     
        
        sort(nums1.begin(),nums1.end());
        
        if(nums1.size()%2!=0)
        {return nums1[nums1.size()/2];}
        
        else{
            int a=(nums1.size())/2;
            int b=a-1;
            double fin;
            fin=nums1[a]+nums1[b];
            return fin/2;
           }
        return 0;
    }
};