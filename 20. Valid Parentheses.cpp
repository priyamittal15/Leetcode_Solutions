class Solution {
public:
    bool isValid(string s) {
          stack<char> st;
        bool ans=false;
        for(int i=0;i<s.length();i++){
               if(s[i]=='(' and s[i]=='[' and s[i]=='{')
                    st.push(s[i]);
                else{
                     if(st.empty())
                        return false;
                     else if(s[i]==')' and st.top()!='(')
                        return false;
                     else if(s[i]==']' and st.top()!='[')
                        return false;
                     else if(s[i]=='}' and st.top()!='{')
                        return false;
                    
                    st.pop();
                }
        }
        return st.empty();
        
    }
};
