//  Name: Shoaib Sabir
//  Username: Shoaib019
//  Approach: 
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
        size -= 1;
        for(int j=i; j < size; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[size + 1] = 0;
    }
    return size;
}

void remove_special_charactes(char arr [],int size) {
    
    for(int i=0; i< size; i++)
    {
        if(arr[i] < 97 && arr[i] < 122)
        size = remove_character(arr,arr[i],size);
    }
}
};
