class Solution {
    public String addSpaces(String s, int[] spaces) {
        StringBuilder sb=new StringBuilder();
        int n=0;
        for(int i=0;i<=s.length()-1;i++)
        {
            if(n<=spaces.length-1)
            {
                if(i==spaces[n])
                {
                    sb=sb.append(" ");
                    n++;
                }
            }    
                    sb=sb.append(s.charAt(i));
        }
        return sb.toString();
    }
}
