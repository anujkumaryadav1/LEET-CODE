class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int totalrow = matrix.size();
        int totalcols = matrix[0].size();
        int n = totalrow*totalcols;
        
        int s = 0;
        int e = n-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            int rowidx = mid/totalcols;
            int colsidx = mid%totalcols;
            if(matrix[rowidx][colsidx] == target){
                return true;
            }else if(matrix[rowidx][colsidx] > target){
                e = mid -1;
            }else{
                s = mid +1;
            }
        }
        return false;
    }
};