// Name: Hussain Iftikhar
// userName: hussainiftikhar542
// Aproach: First remove all the brackets from the string and then start the loop to length of string and then perform all the operation on value.
class Solution {
public:
    int calculate(string s) {
        stack<int> num;
        s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
        char op='+';
        long currentValue=0;
        int sum=0,last=0;
        if(s.length() == 0)
        {
            return 0;
        }
        for(int i=0;i<s.length();i++)
        {
            if(isdigit(s[i]) )
            {
                    currentValue=currentValue*10+s[i]-'0';
            }
            if(!isdigit(s[i]) || i==s.size()-1)
            {
                if(op == '+')
                {
                    sum+=last;
                    last=currentValue;
                }
                else if(op == '-')
                {
                    sum+=last;
                    last=-currentValue;
                }
                else if(op == '*')
                {
                    last=last*currentValue;
                }
                 else if(op == '/')
                {
                     last=last/currentValue;
                }
                op=s[i];
                currentValue=0;
            }
            
        }
        sum+=last;
        return sum;
    }
    
};
