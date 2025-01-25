class Solution {
    public int kthFactor(int n, int k) {
        int count=0;
        int factor=0;
            for(int i=1;i<=n;i++)
            {
                if(n%i==0)
                {
                    count++;
                    factor=i;
                }
                if(count==k)
                {
                  return factor;
                }
            }
       return -1;
    }
}
