int removeDuplicates(int* nums, int numsSize) {
   
    int k = 1;  
    
    for (int i = 1; i < numsSize; i++) {
            nums[k] = nums[i]; 
            k++; 
        }
    }
    
    return k;  
}
