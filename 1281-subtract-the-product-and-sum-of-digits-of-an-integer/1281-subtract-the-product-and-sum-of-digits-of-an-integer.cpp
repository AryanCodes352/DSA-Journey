class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;
        int ld;

        while(n!=0){
            ld = n%10;
            sum = sum + ld;
            product = product * ld;
            n/=10;
        }

        return product - sum;

    }
};