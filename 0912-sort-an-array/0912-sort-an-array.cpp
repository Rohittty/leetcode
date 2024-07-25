class Solution {
public:
void merge(vector<int>& nums,int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
//copy value karne ke liye array banaye;
    int*first=new int[len1];
    int*seac=new int[len2];
    //ab value copy kare;
    int mainindexvalue=s;
    for(int i=0;i<len1;i++){
        first[i]=nums[mainindexvalue++];
    }
     mainindexvalue=mid+1;

    for(int i=0;i<len2;i++){
        seac[i]=nums[mainindexvalue++];
    }
     int index1 = 0;
    int index2 = 0;
    mainindexvalue = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < seac[index2]) {
            nums[mainindexvalue++] = first[index1++];
        }
        else{
            nums[mainindexvalue++] = seac[index2++];
        }
    }   

    while(index1 < len1) {
        nums[mainindexvalue++] = first[index1++];
    }

    while(index2 < len2 ) {
        nums[mainindexvalue++] = seac[index2++];
    }

    delete []first;
    delete []seac;



}

void mergesort(vector<int>& nums,int s,int e ){
    int mid=(s+e)/2;
   if(s>=e){
    return ;
   }
   mergesort(nums,s,mid);

   mergesort(nums,mid+1,e);

   merge(nums,s,e);
   
}
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
        
    }
};