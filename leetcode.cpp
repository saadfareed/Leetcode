class Solution {
public:
    string countAndSay(int n, string prevs = "1") {
    if(n==1) return prevs;
    int i=0, j, len = prevs.size();
    string currs = "";
    while(i<len) {
        j=i;
        while(i<len && prevs[i]==prevs[j]) i++;
        currs += to_string(i-j) + prevs[j];
    }
    return countAndSay(n-1, currs);
}
}; 
