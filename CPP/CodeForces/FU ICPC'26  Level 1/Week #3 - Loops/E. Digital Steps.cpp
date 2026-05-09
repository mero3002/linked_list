#include <iostream>
#include <string>
using namespace std;
int main(){
    string number;
    cin >> number;
    int i = 0;
    for (i; number.length() > 1; i++){
        long long int sum = 0;
        for (char c : number){
            sum += int(c - '0');
        }
        number = to_string(sum);
    }
    cout << i;
    return 0;
}