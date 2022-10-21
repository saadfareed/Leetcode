//  Name: Shoaib Sabir
//  Username: Shoaib019
//  Approach: take boolean type array size of 26 then
//            loop through string and mark bool arr according
//            to letter number at the end check if bool arr if
//            all true then all letters present else not

 class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool abc[26] = {false};
        for(int i = 0; i < sentence.length(); i++)
        {
            if ((sentence[i] - 97) <= 25)
            {
                abc[sentence[i] - 97] = true;
            } 
        }
        bool flag = true;
        int size = sizeof(abc) / sizeof(abc[0]);
        for(int i = 0; i < size; i++)
        {
            if(abc[i] != true)
            {
                flag = false;
                break;
            }
        }
        return (flag == true) ? true : false;
    }
};