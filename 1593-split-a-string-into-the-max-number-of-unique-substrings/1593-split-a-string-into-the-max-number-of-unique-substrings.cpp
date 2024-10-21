class Solution {
public:
    int sol=0;
    void solve(int i,string s,unordered_set<string> st)
    {
        if(i>=s.size())
        {
            int n=st.size();
            sol=max(sol,n);
            return ;
        }
       
        for(int k=i;k<s.size();k++)
        {
            string o=s.substr(i,k-i+1);
            if(st.find(o)==st.end())
            {
                st.insert(o);
                solve(k+1,s,st);
                st.erase(o);
            }
        }

        
    }
    int maxUniqueSplit(string s) 
    {
        unordered_set<string> st;
        solve(0,s,st);
        return sol;
    }
};