class Solution {
    public String longestCommonPrefix(String[] strs) {
     Arrays.sort(strs);
     String s1=strs[0];
     String result="";
     String s2=strs[strs.length-1];
     int i=0;
     while(i<=s1.length()-1 && s1.charAt(i)==s2.charAt(i))
     {
          result=result+s1.charAt(i);
          i++;
     }
     return result;

    }
}
