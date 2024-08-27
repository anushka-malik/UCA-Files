#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isValid(int r, int c, vector<string>& board, int n) {
    int dr = r;
    int dc = c;

    // Check upper diagonal on left side
    while (r >= 0 && c >= 0) {
        if (board[r][c] == 'Q')
            return false;
        r--;
        c--;
    }
    
    // Check row on left side
    r = dr;
    c = dc;
    while (c >= 0) {
        if (board[r][c] == 'Q')
            return false;
        c--;
    }
    
    // Check lower diagonal on left side
    r = dr;
    c = dc;
    while (r < n && c >= 0) {
        if (board[r][c] == 'Q')
            return false;
        r++;
        c--;
    }
    
    return true;
}

void find(int col, vector<string>& board, vector<vector<string>>& ans, int n) {
    if (col == n) {
        ans.push_back(board);
        return;
    }
    
    for (int i = 0; i < n; i++) {
        if (isValid(i, col, board, n)) {
            board[i][col] = 'Q';
            find(col + 1, board, ans, n);
            board[i][col] = '.';  
        }
    }
}

void printSolutions( vector<vector<string>>& ans) {
    for (const auto& solution : ans) {
        for (const auto& row : solution) {
            cout << row << endl;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    
    vector<string> board(n, string(n, '.'));
    vector<vector<string>> ans;

    find(0, board, ans, n);

    printSolutions(ans);

    return 0;
}
