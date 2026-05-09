#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 0;
    int x;
    while (n != 0){
        x = n % 10;
        sum += x;
        n /= 10;
    }
    cout << sum;
    return 0;
}