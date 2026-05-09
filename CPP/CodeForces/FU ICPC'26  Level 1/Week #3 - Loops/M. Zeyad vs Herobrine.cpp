#include <iostream>
using namespace std;

void drawTriangle(int base){
    for (int i = 1; i <= base; i++){
        for (int j = 0; j < i; j++){
            cout << '*';
        }
        cout << '\n';
    }
}

int main(){
    int base;
    cin >> base;
    drawTriangle(base);
    return 0;
}