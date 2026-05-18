#include <iostream>
using namespace std;

void zeroMan(long long ** grid, int i, int j, int rows, int columns){
    for (int c = 0; c < columns; c++){
        grid[i][c] = 0;
    }

    for (int r = 0; r < rows; r++){
        grid[r][j] = 0;
    }
}

int main(){
    int rows, columns;
    cin >> rows >> columns;
    long long** grid = new long long*[rows];
    long long** grid_copy = new long long*[rows];

    for (int i = 0; i < rows; i++){ // grid allocation
        grid[i] = new long long[columns];
        grid_copy[i] = new long long[columns];
    }

    for (int i = 0; i < rows; i++){ // grid assigning
        for (int j = 0; j < columns; j++){
            cin >> grid[i][j];
            grid_copy[i][j] = grid[i][j];
        }
    }

    // cout << "\nOriginal:\n";
    // for (int i = 0; i < rows; i++){
    //     for (int j = 0; j < columns; j++){
    //         cout << grid[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }

    // cout << "\nCopy:\n";
    // for (int i = 0; i < rows; i++){
    //     for (int j = 0; j < columns; j++){
    //         cout << grid_copy[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if (!grid[i][j]){
                zeroMan(grid_copy, i, j, rows, columns);
            }
        }
    }

    // cout << "\nCopy (After Finishing):\n";
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cout << grid_copy[i][j] << ' ';
        }
        cout << '\n';
    }

    // cleaning the heap:
    for (int i = 0; i < rows; i++){
        delete[] grid[i];
        delete[] grid_copy[i];
    }

    delete[] grid;
    delete[] grid_copy;

    grid = nullptr;
    grid_copy = nullptr;

    return 0;
}