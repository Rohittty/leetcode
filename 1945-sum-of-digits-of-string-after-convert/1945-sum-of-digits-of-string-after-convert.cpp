class Solution {
public:
    int getLucky(string s, int k) {
        int sum = convertToNumber(s);
        
        while (--k > 0) { // Repeat k-1 times, as the first summation is already done
            int currentSum = 0;
            while (sum != 0) {
                currentSum += sum % 10; // Add the last digit of sum to currentSum
                sum /= 10; // Remove the last digit from sum
            }
            sum = currentSum;
        }
        
        return sum;
    }
    
    int convertToNumber(string s) {
        int totalSum = 0;
        for (char ch : s) {
            int digit = (ch - 'a' + 1); // Convert character to its corresponding number (1 to 26)
            totalSum += digit / 10 + digit % 10; // Sum both digits of the number
        }
        
        return totalSum;
    }
};