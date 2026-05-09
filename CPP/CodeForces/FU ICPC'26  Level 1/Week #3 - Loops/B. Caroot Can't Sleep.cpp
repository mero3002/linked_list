#include <iostream>
using namespace std;

void sheep_me(int n){
    for (int i = 1; i <= n; i++){
        cout << "SHEEP_" << i << '\n';
    }
}

int main(){
    int sheeps;
    cin >> sheeps;
    sheep_me(sheeps);
    return 0;
}