/**
 * Name: Muhammad Abdullah Uppal
 * Username: Abdullah-Uppal
 * Approach: Use stack to push opening brackets and whenever you get closing bracket match it with the most recently pushed opening bracket.
 * */
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;  
        for(auto i:s)  
        {
            if(i=='(' or i=='{' or i=='[') st.push(i);  
            else  
            {
                if(st.empty() || 
                    (st.top()=='(' && i!=')') || 
                    (st.top()=='{' && i!='}') || 
                    (st.top()=='[' && i!=']')
                ) return false;
                st.pop();  
            }
        }
        return st.empty(); 
    }
};
