class Solution {
public:
    int smallestNumber(int n, int t) {
      
     
     
        while(true){
               int mult=1;
       int temp=n;
       while(temp>0){
        mult *= (temp%10) ;
       temp/=10;
       }
       if (mult %t == 0) {
                return n;
            }
            n++;
        }

        
    }
};