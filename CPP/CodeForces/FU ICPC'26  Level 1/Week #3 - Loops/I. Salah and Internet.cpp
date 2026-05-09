#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isHappy(int num){
    while (num != 1){
        int total = 0;
        while (num != 0){
            total += (num % 10) * (num % 10);
            num /= 10;
        }
        if (total == 4){
            return false;
        }
        num = total;
    }
    return true;
}

void getSums(int num){
    int x = 1, y = num - 1;
    while (y){
        if (isHappy(x) && isHappy(y)){
            cout << x << ' ' << y;
            return;
        }
        else {
            x++; y--;
        }
    }
    cout << -1;
}

int main(){
    int t;
    vector<int> v;
    cin >> t;
    int x;
    for (int i = 0; i < t; i++){
        cin >> x;
        v.push_back(x);
    }

    for (int item : v){
        getSums(item);
        cout << '\n';
    }
    return 0;   
}