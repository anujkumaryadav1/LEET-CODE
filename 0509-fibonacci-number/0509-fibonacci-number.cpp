class Solution {
public:
    int solver(int n){
        //base case
        if(n == 0)return 0;
        if(n==1){
            return 1;
        }
        //1case solve
       return solver(n-1) + solver(n-2);
        
    }
    int fib(int n) {
        int i=0;
        int ans = solver(n) ;
        return ans;
        
    }
};