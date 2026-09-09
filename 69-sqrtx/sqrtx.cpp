class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)
            return x;
        long long target = x;
        long long s = 0;
        long long e = x;
        long long mid = s + (e - s) / 2;
        long long ans = -1;
        while (s <= e) {
            long long square = mid * mid;
            if (square == target) {
                return mid;

            } else if (square > target) {
                e = mid - 1;
            } else {
                ans = mid;
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }
};