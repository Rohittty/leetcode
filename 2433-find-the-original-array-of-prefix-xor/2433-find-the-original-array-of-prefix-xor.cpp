class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
       vector<int>ans;
        if(pref.size()==1){
         return pref;       
}
          ans.push_back(pref[0]);
        int num=pref[0];
        for(int i=1;i<pref.size();i++){
            int r=num^pref[i];
            ans.push_back(r);
            num=num^r;
}
        return ans;
    }
};