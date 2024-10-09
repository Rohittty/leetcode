class Solution {
public:
    int minAddToMakeValid(string s) {
       stack<int>st;
        int unbalanced=0;
        for(int i=0;i<s.size();i++){
          if(s[i]=='(')st.push(s[i]);
            else if(!st.empty())st.pop();
            else
                unbalanced++;
        }
        return st.size()+unbalanced;
    }
};