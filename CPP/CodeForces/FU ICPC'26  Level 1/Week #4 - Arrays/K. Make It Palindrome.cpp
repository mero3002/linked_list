#include <iostream>
#include <vector>
using namespace std;

bool isPalindrom(vector<long long> &v){
    for (int i = 0; i < v.size() / 2; i++){
        if (v[i] != v[(v.size() - 1) - i]){
        return false;
        }
    }
    return true;
}
// i had the concept wrong, i should've searched for already complete palindromes,
// instead i searched for the occurrance of the last item.
// int main(){
//     cin.tie(0);
//     ios::sync_with_stdio(0);
//     int tt;
//     cin >> tt;
//     while (tt--){
//         int n;
//         cin >> n;
//         vector<long long> v(n);
//         for (int i = 0; i < n; i++) cin >> v[i];
//         if (isPalindrom(v)) cout << 0 << endl;
//         else {
//             int target = v[n - 1]; // 4
//             int i;
//             for (i =  n - 2; i >= 0; i--){
//                 if (v[i] == target) {
//                     break;
//                 }
//             }
//             if (i > 0) {
//                 cout << i << endl;
//             }
//             else {
//                 cout << n - 1 << endl;
//             }
//         }
//         }
//     return 0;
// }


int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int tt;
    cin >> tt;
    while (tt--){
        int n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        for (int i = 0; i < n; i++){
            vector<long long> suffix;
            for (int j = i; j < n; j++){
                suffix.push_back(v[j]);
            }
            if (isPalindrom(suffix)){
                cout << i << '\n';
                break;
            }
        }
        }
    return 0;
}