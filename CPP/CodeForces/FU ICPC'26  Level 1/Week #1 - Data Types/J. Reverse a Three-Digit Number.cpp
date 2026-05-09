#include <iostream>
using namespace std;
int main(){
    int n, x;
    cin >> n;
    int reversed = 0;
    int i = 10;
    while (n != 0){
        x = n % 10;
        reversed = (reversed * i) + x;
        n /= 10;
    }
    cout << reversed;
    return 0;
}