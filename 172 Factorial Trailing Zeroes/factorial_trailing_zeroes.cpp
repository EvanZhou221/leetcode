/* Factorial Trailing Zeroes */
class Solution {
public:
    int trailingZeroes(int n) {
        int total = 0;
        while (n > 0) {
            total += n / 5;
            n /= 5;
        }
        return total;
    }
};