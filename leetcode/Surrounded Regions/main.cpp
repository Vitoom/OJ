#include <iostream>
#include <vector>
using namespace std;

class Solution {
    int rows,cols;

public:
    void solve(vector<vector<char>>& board) {
        rows = board.size();
        cols = board[0].size();
        if(rows<=2 || cols<=2) return;

    }

    void bfs(vector<vector<char>>& board) {
        vector<pair<int, int>> v;
        for(int i=0; i<rows; ++i)
            for(int j=0; j<cols; ++j){
                bool border = false;
                if(board[i][j]=='O'){
                    if(i==0 || j==0 || i==rows-1 || j==cols-1) border = true;
                    int cur = 0;
                    while(cur<v.size()){
                        if(v[cur].first==0 || v[cur].second==0 || v[cur].first==rows-1 || v[cur].second==cols-1) border = true;
                        if(v[cur].second-1>=0&&board[v[cur].first][v[cur].second-1]=='o'){
                            board[v[cur].first][v[cur].second-1] = 'X';
                            v.push_back(make_pair(v[cur].first, v[cur].second-1));
                        }
                        if(v[cur].second+1<rows&&board[v[cur].first][v[cur].second+1]=='o'){
                            board[v[cur].first][v[cur].second+1] = 'X';
                            v.push_back(make_pair(v[cur].first, v[cur].second+1));
                        }
                        if(v[cur].first-1>=0&&board[v[cur].first-1][v[cur].second]=='o'){
                            board[v[cur].first-1][v[cur].second] = 'X';
                            v.push_back(make_pair(v[cur].first-1, v[cur].second));
                        }
                        if(v[cur].first+1<cols&&board[v[cur].first+1][v[cur].second]=='o'){
                            board[v[cur].first+1][v[cur].second] = 'X';
                            v.push_back(make_pair(v[cur].first+1, v[cur].second));
                        }
                        cur++;
                    }
                    while(!v.empty()){
                        auto coord = *v.rbegin();
                        board[coord.first][coord.second] = '#';
                        v.pop_back();
                    }
                }
            }
        for(int i=0; i<rows; ++i)
            for(int j=0; j<cols; ++j)
                if(board[i][j]='#')
                    board[i][j] = 'O';
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}