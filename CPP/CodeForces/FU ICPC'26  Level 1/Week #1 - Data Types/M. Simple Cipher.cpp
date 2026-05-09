#include <iostream>
using namespace std;

string letters = "abcdefghijklmnopqrstuvwxyz";

char encode(char x, int shifts){
    for (int i = 0; i < 27; i++){
        if (letters[i] == x){
            return letters[i + shifts];
        }
    }
    return NULL;
}

int main(){
    char letter1, letter2;
    int shifts;
    cin >> letter1;
    cin >> letter2;
    cin >> shifts;
    cout << encode(letter1, shifts);
    cout << ' ';
    cout << encode(letter2, shifts);
    return 0;
}