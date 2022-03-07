class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int mul = 1;
        do {
            int digit = n%10;
            mul = mul * digit;
            sum += digit;
        }
        while (n/=10);
        return (mul-sum);
    }
};
