class Solution {
public:
    bool canAliceWin(int n) {
    if(n<10) return false; int c=0;int s=10;
    while(n>=s){
n-=s;
s--;
c++;}
if(c%2==1) return true;
    
    return false;
    }
};