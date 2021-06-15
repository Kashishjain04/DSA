// https://leetcode.com/problems/valid-sudoku

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // check rows and columns
        for(int i=0; i<9; i++){
            unordered_set <char> r, c;
            for(int j=0; j<9; j++){
                if(r.find(board[i][j]) != r.end()) return false;
                if(board[i][j] != '.') r.insert(board[i][j]);
                if(c.find(board[j][i]) != c.end()) return false;
                if(board[j][i] != '.') c.insert(board[j][i]);
            }
        }
        // check sub-box
        for(int i=0; i<9; i+=3){
            unordered_set<char> s1,s2,s3;
            for(int j=i; j<i+3; j++){
                for(int k=0; k<3; k++){
                    if(s1.find(board[j][k]) != s1.end()) return false;
                    if(board[j][k] != '.') s1.insert(board[j][k]);
                }
                for(int k=3; k<6; k++){
                    if(s2.find(board[j][k]) != s2.end()) return false;
                    if(board[j][k] != '.') s2.insert(board[j][k]);
                }
                for(int k=6; k<9; k++){
                    if(s3.find(board[j][k]) != s3.end()) return false;
                    if(board[j][k] != '.') s3.insert(board[j][k]);
                }
            }
        }
        return true;
    }
};
