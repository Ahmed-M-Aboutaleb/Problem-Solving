class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, vector<char>> mp;
        vector<vector<char>> b1,b2,b3,b4,b5,b6,b7,b8,b9;
        for(auto el: board) {
            if(!vaildArray(el)) {
                return false;
            }
        }
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j<9;j++) {
                mp[i].push_back(board[j][i]);
            }
        }
        for(auto el:mp) {
            if(!vaildArray(el.second)) {
                return false;
            }
        }
        for(int i = 0; i < 3;i++) {
            vector<char> row;
            for(int j = 0; j<3; j++) {
                row.push_back(board[i][j]);
            }
            b1.push_back(row);
        }
        for(int i = 0; i < 3;i++) {
            vector<char> row;
            for(int j = 3; j<6; j++) {
                row.push_back(board[i][j]);
            }
            b2.push_back(row);
        }
        for(int i = 0; i < 3;i++) {
            vector<char> row;
            for(int j = 6; j<9; j++) {
                row.push_back(board[i][j]);
            }
            b3.push_back(row);
        }
        for(int i = 3; i < 6;i++) {
            vector<char> row;
            for(int j = 0; j<3; j++) {
                row.push_back(board[i][j]);
            }
            b4.push_back(row);
        }
        for(int i = 3; i < 6;i++) {
            vector<char> row;
            for(int j = 3; j<6; j++) {
                row.push_back(board[i][j]);
            }
            b5.push_back(row);
        }
        for(int i = 3; i < 6;i++) {
            vector<char> row;
            for(int j = 6; j<9; j++) {
                row.push_back(board[i][j]);
            }
            b6.push_back(row);
        }
        for(int i = 6; i < 9;i++) {
            vector<char> row;
            for(int j = 0; j<3; j++) {
                row.push_back(board[i][j]);
            }
            b7.push_back(row);
        }
        for(int i = 6; i < 9;i++) {
            vector<char> row;
            for(int j = 3; j<6; j++) {
                row.push_back(board[i][j]);
            }
            b8.push_back(row);
        }
        for(int i = 6; i < 9;i++) {
            vector<char> row;
            for(int j = 6; j<9; j++) {
                row.push_back(board[i][j]);
            }
            b9.push_back(row);
        }
        if(!validBox(b1) || !validBox(b2) || !validBox(b3) || !validBox(b4) || !validBox(b5) || !validBox(b6) || !validBox(b7) || !validBox(b8) || !validBox(b9)) {
            return false;
        }
        return true;
    }
private:
    bool vaildArray(vector<char> arr) {
        unordered_map<char,int> mp;
        for(auto digit: arr) {
            mp[digit]++;
        }
        for(auto el: mp) {
            if(el.second >1 && el.first != '.') {
                return false;
            }
        }
        return true;
    }
    bool validBox(vector<vector<char>> boxes) {
        unordered_map<char, int> mp;
        for(auto el:boxes) {
            for(auto dig: el) {
                mp[dig]++;
            }
        }
        for(auto el: mp) {
            if(el.second >1 && el.first != '.') {
                return false;
            }
        }
        return true;
    }
};