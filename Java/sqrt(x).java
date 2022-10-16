/*
Name: Mr. Aqib Chattha

Username: AqibChattha

Approach: find all the possible numbers whose square is less
or equal to the number then return the largest number.
*/

class Solution {
    public int mySqrt(int x) {
        long i = 0;
        while(i*i <= x)
            i++;
        return (int)i-1;
    }
}