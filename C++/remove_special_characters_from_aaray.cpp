//  Name: Shoaib Sabir
//  Username: Shoaib019
//  Approach: remove_character shifts array to let by one character
//            is_special_character checks whether character is special or not
//            remove_special_charactes reduce size if last character is special
//            and runs loop whenever special character finds in the array it removes
//            find special character using is_special_character method and remove 
//            special charactes using remove_character method
class Solution {
public:
   int remove_character(char arr [], char ch, int size){
    int i;
    for(i=0; i< size; i++)
    {
        if(arr[i] == ch)
        break;
    }
    if(i < size)
    {
        size--;
        for(int j=i; j < size; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[size + 1] = 0;
    }
    return size;
}

  bool is_special_character(char ch){
      if((!(ch >= 97 && ch <= 122) && !(ch >= 65 && ch <= 90) ))
          return true;
      else
          return false;
  }

  int remove_special_charactes(char arr [],int size) {
      if(is_special_character(arr[size - 1]))
      {
          size--;
      }
      for(int i=0; i< size; i++)
      {
          if(is_special_character(arr[i]))
          {
              size = remove_character(arr,arr[i],size);
              i--;
          }
      }
      return size;
  }
};
