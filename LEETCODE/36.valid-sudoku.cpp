/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start
#include "leetcode_setup.h"


class Solution {
public:
bool isValidSudoku(vector<vector<char>>& board) {

    unordered_map<int,unordered_set<char>> rows;
    unordered_map<int,unordered_set<char>> cols;
    map <pair<int,int> , unordered_set<char>> boxes;

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j] == '.') continue;
           
            pair <int,int> boxIndex = {i/3,j/3};

            if(rows[i].count(board[i][j]) || 
               cols[j].count(board[i][j]) || 
               boxes[boxIndex].count(board[i][j]))   
                    return false;   

            rows[i].insert(board[i][j]);
            cols[j].insert(board[i][j]);
            boxes[boxIndex].insert(board[i][j]);
        }
    }   
    return true;   
    }
};
// @lc code=end

