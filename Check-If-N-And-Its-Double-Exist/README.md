**Basic Approach**

Using nested loops, we can compare each element against every other element in the array. Special attention needs to be given to cases where 𝑎𝑟𝑟[i]=0,as 0=2 x 0 is trivially true but invalid if i=j

**Approach**

1. Use a nested for loop to iterate over all pairs of elements in the array.
2. Ensure 𝑖≠𝑗 before comparing arr[i] and 2x arr[j]
3. Return true immediately if the condition is satisfied for any pair.
4. If no such pair exists after all iterations, return false.
