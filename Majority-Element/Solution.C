int majorityElement(int* nums, int numsSize) {
    int candidate = 0, count = 0;

    // Phase 1: Find the candidate
    for (int i = 0; i < numsSize; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: Verify the candidate
    count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    return (count > numsSize / 2) ? candidate : -1;
}
