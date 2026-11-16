class Solution {
public:
    void mergeinplace(vector<int>&v ,int start ,int end){
        int totallen = end-start+1;
        int gap = totallen/2 + totallen%2;
        while(gap>0){
            int i = start ;
            int j = start + gap;
            while(j<=end){
                if(v[i]>v[j]){
                    swap(v[i], v[j]);
                }
                i++ ;
                j++;
            }
             gap  = gap<=1 ?0 : (gap/2)+(gap%2);
        }
    }
        void  mergesort(vector<int>&v ,int start,int end){
        if(start>=end) return ;
           int mid = start +(end-start)/2;
            mergesort(v,start , mid);
            mergesort(v,mid+1,end);
            mergeinplace(v,start,end);
        
    }
    vector<int> sortArray(vector<int>& nums) {
         mergesort(nums , 0 ,nums.size()-1);
        return nums;
        
    }
};