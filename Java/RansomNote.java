// #383 Ransome Note 
// https://leetcode.com/problems/ransom-note/description/

// Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.
// Each letter in magazine can only be used once in ransomNote.

// Example 1:
// Input: ransomNote = "a", magazine = "b"
// Output: false

// Example 2:
// Input: ransomNote = "aa", magazine = "ab"
// Output: false

// Example 3:
// Input: ransomNote = "aa", magazine = "aab"
// Output: true

class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        ArrayList<Character> al = new ArrayList<>();
        char[] mag = magazine.toCharArray();
        HashMap<Character,Integer> hm = new HashMap<>();
        for(int i=0;i<ransomNote.length();i++)
        {
            al.add(ransomNote.charAt(i));
        }
		// store character and its no of occurence in hashmap
        for (int i=0;i<mag.length;i++)
        {
            if(hm.containsKey(mag[i]))
            {
                hm.put(mag[i],hm.get(mag[i])+1);
            }
            else 
                hm.put(mag[i],1);
        }
        for(int i=0;i<al.size();i++)
        {
            if(hm.containsKey(al.get(i)) && hm.get(al.get(i))!=0)
            {
                hm.put(al.get(i),hm.get(al.get(i))-1);
            }
            else
                return false;
        }
        return true;        
    }
}
