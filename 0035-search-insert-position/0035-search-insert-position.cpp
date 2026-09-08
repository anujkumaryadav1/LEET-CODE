class Solution {
public:
    int searchInsert(vector<int>& num, int target) {

        int idx = num.size(); 
        for(int i = 0; i < num.size(); i++){
            if(num[i] == target) {
                return i; 
            } else if(num[i] > target){
                idx = i; 
                break; 
            }
        }
        return idx; 
    }
};