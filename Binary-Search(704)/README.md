**Description:**

 Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.

**Basic Idea:**

   Since the array is sorted in ascending order, we can leverage binary search to efficiently locate the target element. We'll repeatedly divide the search space in half until we find the target or determine it's not present.
   

**Approach:**

Binary search divides the array into halves:


1.Check the middle element .

2.If it’s the target, return its index.

3.If the target is smaller, search the left half.

4.If larger, search the right half.

5.Repeat until the target is found or the array is fully checked.

**Complexity:**

-Time complexity:

𝑂(log𝑛)

-Space complexity:

O(1)
