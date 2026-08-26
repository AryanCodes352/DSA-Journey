class Solution {
public:

    int KMP_MATCH(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        for (int i = 0; i <= n - m; i++) {

            int first = i;
            int second = 0;

            while (second < m) {

                if (haystack[first] != needle[second]) {
                    break;
                }
                else {
                    first++;
                    second++;
                }
            }

            if (second == m) {
                return 1;
            }
        }

        return -1;
    }

    int repeatedStringMatch(string a, string b) {

        if (a == b)
            return 1;

        int repeat = 1;
        string temp = a;

        while (temp.size() < b.size()) {
            temp += a;
            repeat++;
        }

        // Search b inside temp
        if (KMP_MATCH(temp, b) == 1) {
            return repeat;
        }

        // Search b inside temp + one extra a
        if (KMP_MATCH(temp + a, b) == 1) {
            return repeat + 1;
        }

        return -1;
    }
};