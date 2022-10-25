//   Name: Shoaib Sabir
//   Username: Shoaib019
//   Approach: first regex will remove whitespace & special characters
//             then convert string to lover case run loop and start
//             matching element by element from beginning and end
//             whenever find not match return false else true
 var isPalindrome = function(s) {

    s = s.replaceAll(/\s|[^\w\s]|_/g,'').toLowerCase();
    if(s == "") return true;
    for(let i = 0; i < s.length; i ++){
        if(s[i] != s[s.length - i - 1]){
            return false;
        }
    }
    return true;
};