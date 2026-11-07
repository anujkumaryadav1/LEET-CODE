
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int maxi = 0;
        int count = 0;
        int i = 0;
        int j = 0;

        while (j < nums.size()) {

            if (nums[j] == 0) {
                count++;
            }

            while (count > k) {

                if (nums[i] == 0) {
                    count--;
                }

                i++;
            }

            int len = j - i + 1;
            maxi = max(maxi, len);

            j++;
        }

        return maxi;
    }
};
