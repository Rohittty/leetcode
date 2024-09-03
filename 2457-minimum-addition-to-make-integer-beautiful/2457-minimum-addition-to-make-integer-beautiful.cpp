class Solution {
public:
    long long makeIntegerBeautiful(long long n, int target) {
        long long temp = n;
        long long base = 1;
        while(check(n) > target)
        {
            n = n/10 + 1;
            base = base*10;
        }
        return(n*base - temp);
    }
    private:
    int check(long long n)
    {
        long long sum = 0;
        long long temp = n;
        while(temp>0)
        {
            int val = temp%10;
            temp = temp/10;
            sum += val;
        }
        return sum;
    }
};