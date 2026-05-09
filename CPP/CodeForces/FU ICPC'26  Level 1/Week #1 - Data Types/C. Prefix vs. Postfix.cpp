#include <iostream>
using namespace std;

int expression1(int a, int b){
    return a++ * ++b;
}

int expression2(int &a, int &b){
    return ++a * b++;
}

int main(){
    int A, B;
    cin >> A >> B;

    cout << expression1(A, B);
    cout << '\n';
    cout << expression2(A, B);
    cout << '\n';
    cout << A << ' ' << B;
    return 0;
}