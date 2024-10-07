class Solution {
public:
    int minLength(string s) {
        
        stack<char>st;
        if(s.size()==0)return 0;
        for(int i=0;i<s.size();i++){
            if(st.size()==0)st.push(s[i]);
            
           else if(s[i]=='B'||s[i]=='D'){
            
             if(st.top()=='A'&&s[i]=='B'||st.top()=='C'&&s[i]=='D'){
                
                 st.pop();
             }
                else
                    st.push(s[i]);
            }
            else{
            st.push(s[i]);
                cout<<st.size();
            }
        }
        return st.size();
        
    }
};