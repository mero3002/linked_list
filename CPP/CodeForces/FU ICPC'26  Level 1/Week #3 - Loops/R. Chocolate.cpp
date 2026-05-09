#include <iostream>
using namespace std;

int readNum(){
    int num;
    cin >> num;
    return num;
}

int readHeight(){
    int height;
    cin >> height;
    return height;
}

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

void drawChocolate(int num, int height){
    // initial values for every fucking thing:
    int stars = 1;
    int starting_spaces = height - 1;
    int in_between_spaces = 2 * height - 1;

    while (height--){
        printSpaces(starting_spaces);
        for (int i = 0; i < num; i++){
            printStars(stars);
            printSpaces(in_between_spaces);
        }
        cout << '\n';
        stars += 2;
        in_between_spaces -= 2;
        starting_spaces--;
    }
}

int main(){
    int num = readNum();
    int height = readHeight();
    drawChocolate(num, height);
    return 0;
}