class Solution {
public:
    bool checkDivisibility(int n) {
    int org = n;
    int prod = 1;
    int sum = 0;
    while (n) {
        int digit = n % 10;
        sum += digit;
        prod *= digit;
        n /= 10;
    }
    return org % (sum + prod) == 0;
}
};