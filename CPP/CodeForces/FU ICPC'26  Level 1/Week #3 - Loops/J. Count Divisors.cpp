#include <iostream>
#include <vector>
using namespace std;

int countDivisors(int num){
    int counter = 0;
    for (int i = 1; i <= num; i++){
        if (num % i == 0){
            counter ++;
        }
    }
    return counter;
}

int main(){
    int t, item;
    vector<int> v;
    cin >> t;

    while (t--){
        cin >> item;
        v.push_back(item);
    }

    for (int item : v){
        cout << countDivisors(item);
        cout << '\n';
    }
    return 0;
}