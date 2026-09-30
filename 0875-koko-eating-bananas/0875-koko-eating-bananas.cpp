class Solution {
public:
bool caneatall(vector<int>&piles ,int mid , int h){
    int actualhours = 0;
    for(int &x : piles){
        actualhours += x/mid;
        if( x % mid != 0 ){
            actualhours++;
        }
    }
    return actualhours <= h;
}          
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();

        int s = 1;
        int e = *max_element(begin(piles), end(piles));
        while(s<e){
            int mid = s+(e-s)/2;
            if(caneatall(piles , mid , h)){
                e = mid;
            }else{
                s= mid+1;
            }
        }
        return s;    
    }
};