class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int m= requests.size(); int sum =0; int cf=0;
        for(int i=0; i<m;i++){
sum+=abs(requests[i]-cf);
cf=requests[i];
        }
        return sum;
    }
};