/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getFinalState(int* nums, int numsSize, int k, int multiplier, int* returnSize) {
    int *result=(int*)malloc(numsSize*(sizeof(int)));
    for(int j=0;j<=numsSize-1;j++)
    {
        result[j]=nums[j];
    }
    while(k!=0)
    {
        int min=0;
        for(int i=0;i<=numsSize-1;i++)
        {
            if(result[min]>result[i])
            {
                min=i;
            }
        }
        result[min]=multiplier*result[min];
        k--;
    }
    *returnSize=numsSize;
    return result;
    
}
