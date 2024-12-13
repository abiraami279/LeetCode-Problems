/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    int *result=(int*)malloc(numsSize*(sizeof(int)));
    int index=0,count=0;
    for(int i=0;i<=numsSize-1;i++)
    {
        if(nums[i]<target)
        {
            index++;
        }
        else if(nums[i]==target)
        {
            count++;
        }
        
    }
    for(int j=0;j<=count-1;j++)
        {
            result[j]=index;
            index++;
        }
    *returnSize=count;
    return result;
}
