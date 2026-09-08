class Solution {
public:
    int searchInsert(vector<int>& num, int target) {

        int s = 0;
        int e = num.size() - 1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (num[mid] == target) {
                return mid; 
            } else if(num[mid] < target){
                s = mid+1;
            }
            else {
                e = mid - 1 ;
            }
        }
        return s; 
    }
};