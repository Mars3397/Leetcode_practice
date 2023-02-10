class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        // Prune: For each letter, the board must contain at least as many of that letter as word contains
        int occ[128] = {};
        for (auto v : board) {
            for (auto c : v) {
                ++occ[c];
            }
        }
        for (char c : word) {
            if(--occ[c] < 0) {
                return false;
            }
        }
        // check
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                bool f = false;
                check(board, word, i, j, 0, f);
                if (f) return true;
            }
        }
        return false;
    }

    void check(vector<vector<char>>& board, string word, int i, int j, int position, bool &f) {
        // reach the end of the word
        if (position >= word.size()) {
            f = true;
            return;
        }
        // check for the failure 
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || 
            board[i][j] == '.' || board[i][j] != word[position]) {
            return;
        }
        // record that (i, j) is visited
        char copy = board[i][j];
        board[i][j] = '.';
        // keep checking for 4 direction
        check(board, word, i - 1, j, position + 1, f);
        check(board, word, i, j - 1, position + 1, f);
        check(board, word, i + 1, j, position + 1, f);
        check(board, word, i, j + 1, position + 1, f);
        // restore (i, j) for other branch
        board[i][j] = copy;
    }
};