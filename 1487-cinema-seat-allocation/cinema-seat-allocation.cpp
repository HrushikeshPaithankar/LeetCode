class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

        map<int, vector<int>> ch;

        for (int i = 0; i < reservedSeats.size(); i++) {

            int row = reservedSeats[i][0];
            int seat = reservedSeats[i][1];

            if (ch.find(row) == ch.end()) {
                ch[row] = vector<int>(3, 0);
            }

            if (seat == 2 || seat == 3 || seat == 4 || seat == 5) {
                ch[row][0]++;
            }

            if (seat == 4 || seat == 5 || seat == 6 || seat == 7) {
                ch[row][1]++;
            }

            if (seat == 6 || seat == 7 || seat == 8 || seat == 9) {
                ch[row][2]++;
            }
        }

        int ans = (n - ch.size()) * 2;

        for (auto &[row, v] : ch) {

            if (v[0] == 0 && v[2] == 0) {
                ans += 2;
            }
            else if (v[0] == 0 || v[2] == 0) {
                ans += 1;
            }
            else if (v[1] == 0) {
                ans += 1;
            }
        }

        return ans;
    }
};