class Solution {
public:
    int minSteps(string s, string t) {
    //    int count = 0;
    // int n = s.size();
    // int m = t.size();
    //  sort(s.begin(),s.end());
    //  sort(t.begin(),t.end());
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         if (s[i] == t[j]) {
    //             count++;
                
    //         }
    //     }
    // }

    // int ans = n - count;
    // return ans;

   if (s.length() != t.length()) {
        return -1; // Return an error value or handle the case where lengths are different.
    }

    unordered_map<char, int> charCount;
    for (char ch : s) {
        charCount[ch]++;
    }
    int steps = 0;
    for (char ch : t) {
        if (charCount.find(ch) != charCount.end() && charCount[ch] > 0) {
            charCount[ch]--;
        } else {
            steps++;
        }
    }
    return steps;
    }
};