class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int k=n+m;
       vector<int>op(k,0);
        int i=0;
        int j=0;
        int h=0;
        while(h<k){
            if(i>=nums1.size()){
                op[h]=nums2[j];
                j++;
            }
            else if(j>=nums2.size()){
                op[h]=nums1[i];
                i++;
            }
            else{
                if(nums1[i]<nums2[j]){
                    op[h]=nums1[i];
                    i++;
                }
                else{
                   op[h]=nums2[j];
                    j++;
                }
                      
                }
            h++;
        }
        double ans=0;
        if(k%2!=0){
          ans=op[k/2];
        }
        else{
            int a=(k-1)/2;
            int z=a+1;
            ans=(double)(op[a]+op[z])/2;
        }
        return ans;
    }
};