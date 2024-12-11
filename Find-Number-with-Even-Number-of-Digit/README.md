**Intuition:**
The problem requires determining how many numbers in an array have an even number of digits. 
The most straightforward way to achieve this is by iterating through each number and counting its digits. 
The number of digits in a number can be determined by repeatedly removing the last digit (using integer division by 10) until the number becomes zero.
Since this approach is both intuitive and computationally efficient, it suits the problem well.

**Approach**

1. Initialize a Counter:
Start by initializing a counter (result) to zero. This will keep track of how many numbers in the array have an even number of digits.

2. Iterate Through the Array:
Loop through each number in the array.

3. Count the Digits
For each number:

i)Initialize a variable digit_count to zero.


ii)Use a while loop to count the digits by performing integer division (num //= 10) repeatedly until the number becomes zero.


iii)Increment digit_count with each iteration of the loop.


4. Check Digit Parity
After counting the digits for a number, check whether digit_count is even using the modulus operator (digit_count % 2 == 0).

5. Update the Result Counter
If the digit count is even, increment the result counter by one.

6. Return the Result
Once the loop finishes, the value of result will contain the total count of numbers with an even number of digits. Return this value.

