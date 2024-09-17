// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
     if(isBadVersion(1))return 1;
        int s=1;
        int e=n;
        while(s<=e){
             int mid=s+(e-s)/2;
            if(isBadVersion(mid)){
                if(!isBadVersion(mid-1))return mid;
                else
             e=mid-1;   
            }
            else{
                s=mid+1;
            }
            
            
        }
        return 0;
    }
};