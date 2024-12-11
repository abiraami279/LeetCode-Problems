int findNumbers(int* nums, int numsSize) {
    int result=0;
    for(int i=0;i<=numsSize-1;i++)
    {
      int number = nums[i];
      int digit = 0;
      while (number > 0) 
      {
        number = number / 10;  // Update the outer 'number' variable, not redeclare it
        digit++;
      }
      if (digit % 2 == 0) 
      {
        result++;
      }
    }
    return result;
}
