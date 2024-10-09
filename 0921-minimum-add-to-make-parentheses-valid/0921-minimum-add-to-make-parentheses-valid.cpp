class Solution {
public:
    int minAddToMakeValid(string s) {
       int size=0;
        int unbalanced=0;
        for(int i=0;i<s.size();i++){
          if(s[i]=='(')size++;
            else if(size>0)size--;
            else
                unbalanced++;
        }
        return size+unbalanced;
    }
};