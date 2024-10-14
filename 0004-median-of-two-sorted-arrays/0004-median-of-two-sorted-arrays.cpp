class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       for(int i=0;i<nums2.size();i++){
           nums1.push_back(nums2[i]);
       }
        sort(nums1.begin(),nums1.end());
        double ans=0;
        if(nums1.size()%2!=0){
            ans=nums1[nums1.size()/2];
        }
        else{
            int a=(nums1.size()-1)/2;
            int z=a+1;
            
            cout<<nums1[a]<<nums1[z];
            ans=(double)(nums1[a]+nums1[z])/2;
            cout<<ans;
        }
        return ans;
    }
};