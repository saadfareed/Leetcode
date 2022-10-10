/**
 * Name: Muhammad Abdullah Uppal
 * Username: Abdullah-Uppal
 * Approach: Indirectly keeping count of the letters
 **/
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int* count = new int[26];
        std::memset(count, 0, sizeof(int) * 26);
        for (int i = 0; i<s.length(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        for (int i = 0; i<26; i++) {
            if (count[i] != 0) return false;
        }
        delete[] count;
        return true;
    }
};
