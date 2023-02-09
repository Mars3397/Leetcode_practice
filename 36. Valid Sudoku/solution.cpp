class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // check row
        for (int i = 0; i < 9; i++) {
            unordered_set<char> row_record;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;
                if (row_record.count(board[i][j])) {
                    return false;
                }
                row_record.insert(board[i][j]);
            }
        }

        //check col
        for (int i = 0; i < 9; i++) {
            unordered_set<char> col_record;
            for (int j = 0; j < 9; j++) {
                if (board[j][i] == '.') continue;
                if (col_record.count(board[j][i])) {
                    return false;
                }
                col_record.insert(board[j][i]);
            }
        }

        // check square
        for (int i = 0; i < 9; i+=3) {
            for (int j = 0; j < 9; j+=3) {
                unordered_set<char> check;
                for (int k = i; k < i + 3; k++) {
                    for (int l = j; l < j + 3; l++) {
                        if (board[k][l] == '.') continue;
                        if (check.count(board[k][l])) {
                            return false;
                        }
                        check.insert(board[k][l]);
                    }
                }
            }
        }

        return true;
    }
};
