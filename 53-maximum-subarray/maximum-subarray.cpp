class Solution {
public:
    int maxsumarrayhelper(vector<int>&v ,int start , int end  ){
        //base case
        if(start == end) return v[start];
        int maxleftbordersum = INT_MIN , maxrightbordersum = INT_MIN;
        int mid = start + (end-start)/2;
        int maxleftsum = maxsumarrayhelper(v,start,mid);
        int maxrightsum = maxsumarrayhelper(v,mid+1 , end);
        //max cross border sum
        int leftbordersum  = 0 , rightbordersum =0;
        //left border sum
        for(int i = mid ; i>=start ; i--){
            leftbordersum += v[i];
            if(leftbordersum > maxleftbordersum){
                maxleftbordersum = leftbordersum;
            }
        }
            for (int i = mid+1; i <= end;i++){
                 rightbordersum += v[i];
                if(rightbordersum > maxrightbordersum){
                     maxrightbordersum = rightbordersum;
                 }

            }
        
         int crossbordersum = maxleftbordersum + maxrightbordersum;
            return max ( maxleftsum , max(maxrightsum , crossbordersum));
    }
    int maxSubArray(vector<int>& nums) {
        return maxsumarrayhelper(nums ,0, nums.size()-1);
        
    }
};