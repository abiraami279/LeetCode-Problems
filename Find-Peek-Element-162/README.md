**Basic Idea**

The goal is to find the index of the largest element in the array without sorting it. Using a for loop to iterate through the array allows us to efficiently track the largest element encountered so far.

**Approach**

1. Initialize a variable max to 0, assuming the first element is the largest initially.
2. Traverse the array using a for loop.
3. For each element, compare it with the value at nums[max]. If the current element is greater, update max to the current index.
4. After the loop, max will hold the index of the largest element.

**Space Complexity:**
  O(n)


  **Time complexity:**
  O(1)
