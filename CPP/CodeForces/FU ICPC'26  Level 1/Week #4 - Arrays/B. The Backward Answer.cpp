#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int size;
        cin >> size;
        long long* arr = new long long[size];
        for (int i = 0; i < size; i++){
            cin >> arr[i];
        }
        for (int i = size - 1; i >= 0; i--){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        delete[] arr;
    }
    return 0;
}
