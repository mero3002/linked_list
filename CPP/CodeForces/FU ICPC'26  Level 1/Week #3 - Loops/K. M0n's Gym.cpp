#include <iostream>
using namespace std;

void multTable(int num){
    for (int i = 1; i < 11; i++){
        cout << i << ": ";
        for (int j = 1; j <= num; j++){
            cout << i * j << ' ';
        }
        cout << '\n';
    }
}

int main(){
    int num;
    cin >> num;
    multTable(num);
    return 0;
}