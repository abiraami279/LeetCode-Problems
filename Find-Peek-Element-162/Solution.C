int findPeakElement(int* nums, int numsSize) {
    int max=0;
    for(int i=0;i<=numsSize-1;i++)
    {
        if(nums[max]<nums[i])
        {
            max=i;
        }
    }
    return max;
}
