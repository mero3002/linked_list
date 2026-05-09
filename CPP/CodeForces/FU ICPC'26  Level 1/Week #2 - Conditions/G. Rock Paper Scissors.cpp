#include <iostream>
using namespace std;
int main(){
    // Delesseps
    // Mustafa
    char d, m;
    cin >> d >> m;
    if (d == m){
        cout << "Draw";
    }
    else if (d == 'R' && m == 'S'){
        cout << "Delesseps";
    }
    else if (d == 'P' && m == 'R'){
        cout << "Delesseps";
    }
    else if (d == 'S' && m == 'P'){
        cout << "Delesseps";
    }
    else {
        cout << "Mustafa";
    }
    return 0;
}