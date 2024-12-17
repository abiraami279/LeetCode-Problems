
###  Basic Idea
We need to find elements that appear more than `n / 3` times in the array. The challenge is to efficiently count occurrences while avoiding duplicate elements in the result.

###  Approach
1. Loop through the array and count occurrences of each element.
2. Use an auxiliary array `counted` to track elements that have already been considered.
3. Add elements to the result if their count exceeds `n / 3`.

###  Complexity
- **Time complexity**: $$O(n^2)$$ due to the nested loops for counting occurrences.
- **Space complexity**: $$O(n)$$ for the `result` and `counted` arrays.

