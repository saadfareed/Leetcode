Name: Samsor Rahman
username: samsorrahman
Approach:  at the very first step traverse the all stack and push the opening brackets into the stack
            and then check it the closing bracket is comming then check if the top is matching(opening bracket)
            pop the stack.


#include<bits/stdc++.h>
using namespace std;
bool isValid(string s){
    int n = s.size();
    stack <char> st;
    bool ans= true;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='{' || s[i]=='(' || s[i]=='[')
        {
            st.push(s[i]);
        }
        else if( s[i]==')')
        {
            if(!st.empty()&& st.top()=='(')
            {
                st.pop();
            }
            else{
                ans = false;
            }
        }
        
         else if( s[i]=='}')
        {
            if(!st.empty()&& st.top()=='{')
            {
                st.pop();
            }
            else{
                ans = false;
            }
        }
        
        
        else if(s[i]==']')
        {
            if(!st.empty()&& st.top()=='[')
            {
                st.pop();
            }
            else{
                ans = false;
            }
        }
    }
    if(!st.empty())
    {
        return false;
    }
    else {
        return ans;
    }
    
    
}

int main()
{
    
string s = "{([])}";
if(isValid(s)){
cout<<"String is  valid"<<endl;
}

else{
cout<<"invalid string"<<endl;
}

return 0;
}