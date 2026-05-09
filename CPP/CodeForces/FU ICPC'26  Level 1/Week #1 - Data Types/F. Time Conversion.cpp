#include <iostream>
using namespace std;
int main(){
    long long int t, h, m, s;
    cin >> t;
    h = t / 3600;
    m = (t % 3600) / 60;
    s = t % 60;
    cout << h << ' ' << m << ' ' << s;
    return 0;
}