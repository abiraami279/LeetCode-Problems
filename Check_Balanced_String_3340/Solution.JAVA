class Solution {
    public boolean isBalanced(String num) {
        int osum=0;
        int esum=0;
        for(int i=0;i<=num.length()-1;i++)
        {
            if(i%2==0)
            {
                esum=esum+num.charAt(i)-'0';
            }
            else
            {
                osum=osum+num.charAt(i)-'0';
            }

        }
         if(osum==esum)
            {
                return true;
            }
       return false; 
    }
}
