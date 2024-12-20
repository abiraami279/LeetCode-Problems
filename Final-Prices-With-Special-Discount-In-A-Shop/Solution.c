/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* finalPrices(int* prices, int pricesSize, int* returnSize) {
    int* result = (int*)malloc(pricesSize*(sizeof(int)));
    for(int i=0;i<=pricesSize-1;i++)
    {
        if(i!=pricesSize-1)
        for(int j=i+1;j<=pricesSize-1;j++)
        {
            if(prices[j]<=prices[i])
            {
                result[i]=prices[i]-prices[j];
                break;
                
            }
            else
            result[i]=prices[i];
  

        }
        else
        {
            result[i]=prices[i];
        }
        
        
    }
    *returnSize=pricesSize;
    return result;
    
}
