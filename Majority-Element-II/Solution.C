/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* majorityElement(int* nums, int numsSize, int* returnSize) {
    int *result=(int*)malloc(numsSize*(sizeof(int)));
    int k=0;

    int* counted = (int*)malloc(numsSize * sizeof(int));
    int countedSize = 0; // Counter for the counted elements

    for (int i = 0; i < numsSize; i++) {
        int count = 0;
        int alreadyCounted = 0;

        // Check if the number has already been counted
        for (int m = 0; m < countedSize; m++) {
            if (nums[i] == counted[m]) {
                alreadyCounted = 1;
                break;
            }   

        }
        if (alreadyCounted) continue;
       
   
        for(int j=0;j<=numsSize-1;j++)
        {
            if(nums[i]==nums[j])
            {
                count++;
            }
        }
        if(count>(numsSize)/3 )
        {
            result[k++]=nums[i];
            counted[countedSize++] = nums[i];
        }
    }
    *returnSize=k;
    free(counted);
    return result;
    
}
