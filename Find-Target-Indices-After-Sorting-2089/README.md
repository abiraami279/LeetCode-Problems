**Basic Idea**

Instead of using binary search, we use a simple for loop to count the number of elements smaller than the target and the number of times the target is repeated. This helps us determine the indices where the target would appear in a sorted array without actually sorting it.

**Approach**

1.Count Smaller Elements: Iterate through the array and count how many elements are smaller than the target. This gives us the starting index of the target in a sorted array.

2.Count Target Occurrences: Simultaneously count the number of times the target appears in the array.

3.Fill Result: Using the starting index and the count of the target, construct the result array with the indices where the target appears.

Return the result array and its size.
