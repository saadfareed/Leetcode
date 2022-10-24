// Name: Sumit Chakraborty

// Username: chakraborty9569

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int start=0, len=0;
        for(int end=0; end<s.length(); end++)
        {
            char c=s[end];
            if(m.find(c)!=m.end())
                if(start<=m[c])
                    start=m[c]+1;
            len=max(len,end-start+1);
            m[c]=end;
        }
        return len;
    }
};