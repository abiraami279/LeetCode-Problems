class Solution {
    public int reverse(int x) {
        int INT_MIN = Integer.MIN_VALUE; 
        int INT_MAX = Integer.MAX_VALUE; 

        int reversed = 0;

        while (x != 0) {
            int digit = x % 10;
            if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > 7)) {
                return 0; 
            }
            if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && digit < -8)) {
                return 0;
            }
            reversed = reversed * 10 + digit;
            x /= 10;
        }

        return reversed;
    }
}

