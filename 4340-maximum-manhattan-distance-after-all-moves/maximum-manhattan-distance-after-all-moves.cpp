class Solution {
public:
    int maxDistance(string moves) {
          int sum=0;
int x=0;int y=0; int underscore=0;
for(int i=0;i<moves.size();i++){
  
    if(moves[i]=='R') x++;
    else if(moves[i]=='L')x--;
     else if(moves[i]=='D')y--;
      else if(moves[i]=='U')y++;
      else if(moves[i]=='_')sum++;

}
sum+=abs(x)+abs(y);
return sum;

    }
};