#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    long double a, b;
    cin >> a >> b;
    double x = a / b;
    cout << fixed << setprecision(7) << x;
    return 0;
}