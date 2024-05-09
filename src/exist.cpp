#include "exist.h"
#include <iostream>
using namespace std;

bool exist(vector<vector<char> >& board, string word) {
        int row = board.size(), col = board[0].size(), len = word.size();
        bool a = false;
        string ans = "";
        int idx = 0;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                backtracking(board, ans, word, i, j, row, col, len, a, idx);
                if(a)
                    return a;
            }
        }
        return false;
    }
void backtracking(vector<vector<char> > board, string& ans, string word, int i, int j, int row, int col, int len, bool& a, int idx){
    if(i < 0 || i >= row || j < 0 || j >= col)
        return;
    else
        ans.push_back(board[i][j]);

    if(ans.size() == len){
        if(ans == word)
            a = true;
        std::cout << ans << std::endl;
        return;
    }

    int direction[] = {1,2,3,4};
    for(auto dr : direction){
        if(idx == dr)
            continue;
        switch(dr){
            case 1:
                i--;
                idx = 2;
                break;
            case 2:
                i++;
                idx = 1;
                break;
            case 3:
                j--;
                idx = 4;
                break;
            case 4:
                j++;
                idx = 3;
                break;
        }
        backtracking(board, ans, word, i, j, row, col, len, a, idx);
        switch(dr){
            case 1:
                i++;
                idx = 1;
                break;
            case 2:
                i--;
                idx = 2;
                break;
            case 3:
                j++;
                idx = 3;
                break;
            case 4:
                j--;
                idx = 4;
                break;
        }
        ans.pop_back();
    }
}