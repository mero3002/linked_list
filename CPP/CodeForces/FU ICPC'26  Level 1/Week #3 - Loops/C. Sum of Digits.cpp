#include <iostream>
using namespace std;
int main(){
    string num;
    cin >> num;
    int total = 0;
    for (char c : num){
        total += int(c - '0');
    }
    cout << total;
    return 0;
}