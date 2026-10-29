
class Solution {
public:
    int countStudents(std::vector<int>& students, std::vector<int>& sandwiches) {
        int count[2] = {0, 0};
        for (int s : students) {
            count[s]++;
        }
        
        int n = sandwiches.size();
        for (int i = 0; i < n; ++i) {
            int type = sandwiches[i];
            if (count[type] == 0) {
                
                return n - i;
            }
            count[type]--;
        }
        
        return 0;
    }
};