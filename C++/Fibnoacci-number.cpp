// Name: Hussain Iftikhar
// Username: hussainiftikhar5242
// Approach: Find the fibnoacci-number using recurssion.
class Solution {
public:
    int fib(int n) {
        if(n>1)
        {
            return fib(n-1)+fib(n-2);
        }
        else
        {
            return n;
        }
        return 0;
    }
};
