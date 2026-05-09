#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n > 0 && n < 100){
        cout << 1;
    }
    else if (n > 0 && n < 100){
        cout << 1;
    }
    else if (n > 99 && n < 200){
        cout << 2;
    }
    else if (n > 199 && n < 300){
        cout << 3;
    }
    else if (n > 299 && n < 400){
        cout << 4;
    }
    else if (n > 399 && n < 500){
        cout << 5;
    }
    else if (n > 499 && n < 600){
        cout << 6;
    }
    else if (n > 599 && n < 700){
        cout << 7;
    }
    else if (n > 699 && n < 800){
        cout << 8;
    }
    else if (n > 799 && n < 900){
        cout << 9;
    }
    else {
        cout << 10;
    }
    cout << '\n';
    return 0;
}