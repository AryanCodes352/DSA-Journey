class Solution {
public:

    void lpsfind(vector<int>& lps, string s) {
        int pre = 0, suf = 1;

        while(suf < s.size()) {
            if(s[pre] == s[suf]) {
                lps[suf] = pre + 1;
                pre++;
                suf++;
            }
            else {
                if(pre == 0) {
                    lps[suf] = 0;
                    suf++;
                }
                else {
                    pre = lps[pre - 1];
                }
            }
        }
    }

    int strStr(string haystack, string needle) {

        int n = needle.size();
        int m = haystack.size();

        vector<int> lps(n, 0);

        // Create LPS array
        lpsfind(lps, needle);

        int first = 0;
        int second = 0;

        // KMP search
        while(first < m && second < n) {

            if(haystack[first] == needle[second]) {
                first++;
                second++;
            }
            else {
                if(second == 0) {
                    first++;
                }
                else {
                    second = lps[second - 1];
                }
            }
        }

        if(second == n) {
            return first - second;
        }
        else {
            return -1;
        }
    }
};