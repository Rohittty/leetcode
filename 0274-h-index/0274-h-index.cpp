class Solution {
public:
    int hIndex(vector<int>& cit) {
       sort(cit.begin(),cit.end());
        int n=cit.size();
        int h=0;
        for(int i=0;i<cit.size();i++){
            int size=n-i;
      if(cit[i]>=size){
          h=max(h,size);
      }
}
        return h;
    }
};