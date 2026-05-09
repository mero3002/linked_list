#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long int n, m;
    int test;
    cin >> test;
    while (test--){
        cin >> n >> m;
        if (n == 0 && m > 0){
            cout << -1 << '\n';
        }
        else if (m > n){
            int i = 0;
            for (i; m > n; i++){
                n *= 2;
            }
            cout << i << '\n';
        }
        else {
            cout << 0 << '\n';
        }
    }
    return 0;
}