class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string xstr="";
        string ystr="";
        string remaining ="";
        for( auto it : s){
                    if(it==x) xstr+=x;
                    else if(it == y) ystr+=y;
                    else remaining+=it;
        }
        return ystr+remaining+xstr;
    }
};