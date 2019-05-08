#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<bool> flag(9*3+1, false);
        int size = board.size();
        for(int i=0; i<size; ++i){
            for(int j=0; j<size; ++j){
                if(board[i][j]!='.'){
                    if(flag[board[i][j]-'0']) return false;
                    else flag[board[i][j]-'0'] = true;
                }
                if(board[j][i]!='.'){
                    if(flag[9+board[j][i]-'0']) return false;
                    else flag[9+board[j][i]-'0'] = true;

                }
                int r=(i/3)*3+j/3, c=(i%3)*3+j%3;
                if(board[r][c]!='.'){
                    if(flag[18+board[r][c]-'0']) return false;
                    else flag[18+board[r][c]-'0'] = true;
                }
            }
            fill(flag.begin(), flag.end(), false);
        }
        return true;
    }
};

int main() {
    Solution s;
    vector<vector<string>> board = {{"5","3",".",".","7",".",".",".","."},
                                  {"6",".",".","1","9","5",".",".","."},
                                  {".","9","8",".",".",".",".","6","."},
                                  {"8",".",".",".","6",".",".",".","3"},
                                  {"4",".",".","8",".","3",".",".","1"},
                                  {"7",".",".",".","2",".",".",".","6"},
                                  {".","6",".",".",".",".","2","8","."},
                                  {".",".",".","4","1","9",".",".","5"},
                                  {".",".",".",".","8",".",".","7","9"},};
    int size = board.size();
    vector<vector<char>> _board(size, vector<char>(size));
    for(int i=0; i<size; ++i)
        for(int j=0; j<size; ++j){
            _board[i][j] = board[i][j][0];
        }
    cout<<'{';
    for(int i=0; i < size; ++i) {
        cout<<'{';
        for (int j = 0; j < size; ++j) {
            cout << '\'' << _board[i][j] << '\'' << ',';
        }
        cout<<'}'<<','<<endl;
    }
    cout<<'}'<<endl;
    bool ans = s.isValidSudoku(_board);
    cout<<ans<<endl;
    return 0;
}
