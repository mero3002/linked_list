#include <iostream>
using namespace std;

// int readSize(){
//     int size;
//     cin >> size;
//     return size;
// }

// void drawSpaces(int t){
//     while (t--){
//         cout << ' ';
//     }
// }

// void drawX(int size){
//     drawSpaces((size - 1) / 2);
//     cout << 'x';
//     cout << '\n';
// }

// void drawUpper(int size){
//     int rows = (size - 1) / 2;
//     int middle_spaces = size - 2;

//     for (int i = 0; i < rows; i++){
//         drawSpaces(i);
//         cout << '\\';
//         drawSpaces(middle_spaces);
//         middle_spaces -= 2;
//         cout << '/';
//         cout << '\n';
//     }
// }

// void drawLower(int size){
//     int rows = (size - 1) / 2;
//     int middle_spaces = 1;

//     for (int i = rows - 1; i >= 0; i--){
//         drawSpaces(i);
//         cout << '/';
//         drawSpaces(middle_spaces);
//         middle_spaces += 2;
//         cout << '\\';
//         cout << '\n';
//     }
// }

// void drawTarget(int size){
//     if (size <= 0){
//         return;
//     }
//     drawUpper(size);
//     drawX(size);
//     drawLower(size);
// }

// int main(){
//     drawTarget(readSize());
//     return 0;
// }

int main(){
    int size;
    cin >> size;

    for (int row = 1; row <= size; row++){
        for (int col = 1; col <= size; col++){
            if (row == col && row + col == size + 1){
                cout <<'X';
            }
            else if (row == col){
                cout << '\\';
            }
            else if (row + col == size + 1){
                cout << '/';
            }
            else {
                cout << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}