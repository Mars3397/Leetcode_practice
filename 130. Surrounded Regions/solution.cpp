class Solution {
public:
    void solve(vector<vector<char>>& board) {
        // check not surrounded in left and right -> change 'O' to '.'
        for (int i = 0; i < board.size(); i++) {
            update(board, i, 0);
            update(board, i, board[0].size() - 1);
        }
        // check not surrounded in top and bottom -> change 'O' to '.'
        for (int i = 0; i < board[0].size(); i++) {
            update(board, 0, i);
            update(board, board.size() - 1, i);
        }
        // update all
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == '.') board[i][j] = 'O';
                else board[i][j] = 'X';
            }
        }
    }

    void update(vector<vector<char>>& board, int i, int j) {
        if (board[i][j] == 'O') {
            board[i][j] = '.';
            if (i > 0) update(board, i - 1, j);
            if (j > 0) update(board, i, j - 1);
            if (i < board.size() - 1) update(board, i + 1, j);
            if (j < board[0].size() - 1) update(board, i, j + 1);
        }
    }
};