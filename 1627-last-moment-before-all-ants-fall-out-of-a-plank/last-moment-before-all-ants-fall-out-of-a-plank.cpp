class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
       int maxTime = 0;

    for (int position : left) {
        maxTime = max(maxTime, position);
    }

    for (int position : right) {
        maxTime = max(maxTime, n - position);
    }

    return maxTime;
    }
};