#include <iostream>
using namespace std;
int main(){
    string number;
    cin >> number;
    if (number[0] == number[number.length() - 1]){
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}