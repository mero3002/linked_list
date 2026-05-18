// stack overflow and heart failure
#include <iostream>
using namespace std;

void zeroMan(long long ** grid, long long i, long long j, int rows, int columns){
    int current_i = i;
    int current_j = j;

    for (int c = 0; c < rows; c++){
        if (c == j){
            continue;
        }
        else if (i == current_i && c == current_j) {
            continue;
        }
        else if (grid[i][c] == 0){
            zeroMan(grid, i, c, rows, columns);
        }
        else {
            grid[i][c] = 0;
        }
    }

    for (int r = 0; r < columns; r++){
        if (r == i){
            continue;
        }
        else if (r == current_i && j == current_j) {
            continue;
        }
        else if (grid[r][j] == 0){
            zeroMan(grid, r, j, rows, columns);
        }
        else {
            grid[r][j] = 0;
        }
    }
}

int main(){
    int rows, columns;
    cin >> rows >> columns;
    long long** grid = new long long*[rows];

    for (int i = 0; i < rows; i++){ // grid allocation
        grid[i] = new long long[columns];
    }

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cin >> grid[i][j];
        }
    }
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if (grid[i][j] == 0){
                zeroMan(grid, i, j, rows, columns);
            }
        }
    }

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cout << grid[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}