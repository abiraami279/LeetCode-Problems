class Solution {
    public String makeSmallestPalindrome(String s) {
        char arr[]=s.toCharArray();

        for(int i=0;i<s.length()/2;i++)
        {
            if(arr[i]!=arr[s.length()-i-1])
            {
                if(arr[i]<arr[s.length()-i-1])
                {
                     arr[i]=arr[i];
                     arr[s.length()-i-1]=arr[i];
                }
                else
                {
                    arr[i]=arr[s.length()-i-1];
                    arr[s.length()-i-1]=arr[s.length()-i-1];
                }
            }
            else
            {
                arr[i]=arr[i];
                arr[s.length()-i-1]=arr[s.length()-i-1];
            }
        }
        return new String(arr);
    }
}
