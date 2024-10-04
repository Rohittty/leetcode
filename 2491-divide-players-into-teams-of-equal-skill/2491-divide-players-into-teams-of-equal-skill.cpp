class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
     sort(skill.begin(),skill.end());
        int start=0;
        int end=skill.size()-1;
        int sum=skill[start]+skill[end];
        long long chemistry=0;
        while(start<=end){
          int curr=skill[start]+skill[end];
            if(curr!=sum)return -1;
            chemistry=chemistry+(skill[start]*skill[end]);
            start++;
            end--;
        }
        return chemistry;
    }
};