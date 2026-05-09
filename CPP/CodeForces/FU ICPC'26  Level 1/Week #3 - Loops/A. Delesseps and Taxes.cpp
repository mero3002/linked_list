#include <iostream>
using namespace std;
int main(){
    long long int days;
    cin >> days;
    long long int money = 0;
    for (long long int i = 1; i <= days; i++){
        money += i;
    }
    cout << money;
    return 0;
}