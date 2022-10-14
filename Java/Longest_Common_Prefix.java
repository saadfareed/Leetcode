public class Longest_Common_Prefix {
    String r="";
    int n=strs.length;
    Arrays.sort(strs);
    String s=strs[0];
    String h=strs[n-1];
    for(int i =0;i<s.length();i++)
    {
        if(s.charAt(i)!=h.charAt(i)) break;
        r=r+s.charAt(i);  
    }
    return r; 
}
