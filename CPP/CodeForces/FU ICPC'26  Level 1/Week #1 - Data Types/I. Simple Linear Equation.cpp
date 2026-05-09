#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    float x;
    cin >> a >> b >> c;
    x = (float(c) / a) - (float(b) / a);
    cout << x;
    return 0;
}