class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> res(n, 0);
        stack<int> st;
        int prev_time = 0;

        for (string log : logs) {
            
            int pos1 = log.find(':');
            int pos2 = log.find_last_of(':');

            int id = stoi(log.substr(0, pos1));
            string type = log.substr(pos1 + 1, pos2 - pos1 - 1);
            int time = stoi(log.substr(pos2 + 1));

            if (type == "start") {
                if (!st.empty()) {
                    res[st.top()] += time - prev_time;
                }
                st.push(id);
                prev_time = time;
            } else {
                res[st.top()] += time - prev_time + 1;
                st.pop();
                prev_time = time + 1;
            }
        }

        return res;
    }
};