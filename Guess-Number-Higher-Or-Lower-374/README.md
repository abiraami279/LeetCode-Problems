**Basic Idea**

 This problem is similar to binary search, but instead of an array, the input consists of consecutive numbers.
 
 Thus, we can directly work with the values instead of indices.

 **Approach**

1. Set start = 1 (since the range is from 1 to n).

 
2. Set end = n.

3. Compute mid = start + (end - start) / 2.

4. Call the guess() function and store the result.

5. If result == 0, return mid as the target value.
  
6. If result == -1, the target is to the left, so update end = mid - 1.
   
7. If result == 1, the target is to the right, so update start = mid + 1.
