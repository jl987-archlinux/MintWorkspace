/**
 * DZY loves chessboard, and he enjoys playing with it.
 *
 * He has a chessboard of n rows and m columns. Some cells of the chessboard
 * are bad, others are good. For every good cell, DZY wants to put a chessman
 * on it. Each chessman is either white or black. After putting all chessman,
 * DZY wants that no two chessmen with the same color are on two adjacent
 * cells. Two cells are adjacent if and only if they share a common edge.
 *
 * Your task is to find any suitable placement of chessman on the given
 * chessboard.
 *
 * Input
 * The first line contains two space-separated integers n and m
 * (1 <= n, m <= 100).
 *
 * Each of the next n lines contains a string of m characters: the j-th
 * character of the i-th string is either "." or "-".
 *
 * A "." means that the corresponding cell (in the i-th row and the j-th
 * column) is good, while a "-" means it is bad.
 *
 * Output
 * Ouput must contain n lines, each line must contain a string of m
 * characters. The j-th characters of the i-th string should be either
 * "W", "B" or "-". Character "W" means the chessman on the cell is white,
 * "B" means it is black, "-" means the cell is a bad cell.
 *
 * If multiple answers exist, print any of them. It is guaranteed that
 * at least one answer exists.
 *
 */
#include <iostream>
using namespace std;

void print_board(int *board, int n, int m)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << board[i][j];
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    int board[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char c;
            cin >> c;
            if (c == '.') { board[i][j] = 0; }
            else { board[i][j] = 1; }
        }
    }
    return 0;
}
