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
}

int main(){
    int rows;
    cin >> rows;
    int stars = 2 * rows - 1;
    int spaces = 0;
    for (int i = 0; i < rows; i++){
        printSpaces(spaces);
        printStars(stars);
        cout << '\n';
        spaces++;
        stars -= 2;
    }
    return 0;
}