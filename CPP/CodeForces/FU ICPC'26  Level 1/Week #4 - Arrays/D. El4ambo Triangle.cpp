#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<unsigned long long> v1 = {1};
    cout << v1.at(0) << '\n';
    while (t--){
        vector<unsigned long long> v2 = {1};
        for (size_t i = 1; i < v1.size(); i++){
            v2.push_back(v1.at(i) + v1.at(i - 1));
        }
        v2.push_back(1);
        for (unsigned long long item : v2){
            cout << item << ' ';
        }
        cout << '\n';
        v1 = v2;
    }
}