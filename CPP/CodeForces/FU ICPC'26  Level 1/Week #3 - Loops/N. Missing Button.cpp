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

int readRows(){
    int r;
    cin >> r;
    return r;
}

void drawPyramid(int rows){
    for (int i = 1; rows != 0; i += 2){
        printSpaces(rows - 1);
        printStars(i);
        rows --;
    }
}

int main(){
    drawPyramid(readRows());
    return 0;
}