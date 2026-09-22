class Solution {
public:
    int reverseDegree(string s) {
       
        int sum=0;
     
         
            for(int i= 0 ;i<s.length();i++ ){
            int  m = (26 - (s[i] - 'a')) *(i + 1);
            
             sum += m ;
         } 
         return sum;
        
    }
};