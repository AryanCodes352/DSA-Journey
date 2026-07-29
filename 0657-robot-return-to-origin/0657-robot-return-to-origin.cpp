class Solution {
public:
    bool judgeCircle(string moves) {
        int r = 0, l = 0, u = 0, d = 0;

        for (int i = 0; i < moves.size(); i++) {
            char c = moves[i];

            if (c == 'R') {
                r++;
            } else if (c == 'L') {
                l++;
            } else if (c == 'U') {
                u++;
            } else if (c == 'D') {
                d++;
            }
        }

        return (r == l && u == d);
    }
};