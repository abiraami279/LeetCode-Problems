**Basic Idea**

The problem involves finding the first bad version in a sequence of versions. 
Since the versions are sorted and the transition point from "good" to "bad" is where the condition changes,
we can use a binary search approach to efficiently narrow down the search space.

**Approach**

1. Initialize two pointers: start at 1 and end at n, representing the range of versions to search.
2. Perform a binary search:
3. Calculate the middle version, mid = start + (end - start) / 2.
4. Use the provided API isBadVersion(mid) to check if mid is a bad version.
5. If mid is bad, move the end pointer to mid - 1 since the first bad version might be earlier.
6. If mid is not bad, move the start pointer to mid + 1 since the first bad version must be later.
When the loop exits, start will point to the first bad version.
