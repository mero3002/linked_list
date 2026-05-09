#include <iostream>
using namespace std;

void printSpaces(int t){
    while (t--){
        cout << ' ';
    }
}

void printStars(int t){
    while (t--){
        cout << '*';
    }
    cout << '\n';
}

// int readSize(){
//     int s;
//     cin >> s;
//     return s;
// }

void drawAscPyramid(int rows){
    for (int i = 1; rows != 0; i += 2){
        printSpaces(rows - 1);
        printStars(i);
        rows --;
    }
}

void drawDecPyramid(int rows){
    int stars = (2 * rows) - 1;
    int spaces = 1;

    for (int i = 0; i < rows; i++){
        printSpaces(spaces++);
        printStars(stars);
        stars -= 2;
    }
}

int main(){
    int s;
    cin >> s;
    drawAscPyramid(s);
    drawDecPyramid(s - 1);
    return 0;
}