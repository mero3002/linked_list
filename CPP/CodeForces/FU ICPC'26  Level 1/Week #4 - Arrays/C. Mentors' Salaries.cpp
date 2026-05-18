#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int size;
        cin >> size;
        int* arr = new int[size];
        cin >> arr[0] >> arr[1];
        for (int i = 2; i < size; i++){
            arr[i] = arr[i - 1] + arr[i - 2];
        }
        for (int i = 0; i < size; i++){
            cout << arr[i];
            cout << ' ';
            // cout << '\n';
        }

    }
    return 0;
}
