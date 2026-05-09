#include <iostream>
using namespace std;

int main(){
    long long t, bullets, enemies, bullet;
    bool win;
    cin >> t;
    while (t--){
        win = true;
        cin >> enemies >> bullets;
        while (enemies--){
            cin >> bullet;
            bullets -= bullet;
            if (bullets < 0){
                win = false;
            }
        }

        if (win){
            cout << "ROCK IT 3AZOZ" << '\n';
        }
        else {
            cout << "3AZOZ NOT LAZOZ" << '\n';
        }
    }
    return 0;
}