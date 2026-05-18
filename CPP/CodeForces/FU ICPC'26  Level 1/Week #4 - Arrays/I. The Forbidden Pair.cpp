#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int tt, pairs;
    cin >> tt;
    while (tt--){
        int n;
        cin >> n;
        vector<int> l(n);
        int item;
        for (int i = 0; i < n; i++){
            cin >> item;
            l[i] = item;
        } 
        pairs = 0;
        sort(l.begin(), l.end());
        int k;
        for (int i = 0; i < n; i++){
            int target = l[i] * 2;
            auto range = equal_range(l.begin() + i + 1, l.end(), target);
            pairs += range.second - range.first;
        }
        cout << pairs << endl;
    }
    return 0;
}

// int main(){
//     cin.tie(0);
//     ios::sync_with_stdio(0);
//     int tt;
//     cin >> tt;
//     while (tt--){
//         int n, pairs = 0;
//         cin >> n;
//         int* arr = new int[n];
//         for (int i = 0; i < n; i++){
//             cin >> arr[i];
//         }
//         for (int i = 0; i < n; i++){
//             for (int k = 0; k < n; k++){
//                 if (arr[i] * 2 == arr[k]){
//                     pairs++;
//                 }
//             }
//         }
//         cout << pairs << '\n';
//     }
//     return 0;
// }