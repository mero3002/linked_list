#include <iostream>
#include <vector>
using namespace std;

// int main(){
//     vector<int> collection;
//     int t;
//     long long n, size, item_checker;
//     cin >> t;
//     while (t--){
//         bool beautiful = true;
//         collection.clear();
//         cin >> n;
//         while (n--){
//             cin >> size;
//             collection.push_back(size);
//         }
//         item_checker = collection.at(0);
//         for (int item : collection){
//             if (item_checker > item){
//                 beautiful = false;
//                 break;
//             }
//             item_checker = item;
//         }
//         cout << (beautiful ? "YES\n" : "NO\n");
//     }
//     collection.clear();
//     return 0;
// }



int main(){
    int t, size;
    long long item, item_checker;
    cin >> t;
    while (t--){
        bool beautiful = true;
        cin >> size;
        long long* arr = new long long[size];
        for (int i = 0; i < size; i++){ // assign the array
            cin >> item;
            arr[i] = item;
        }
        item_checker = arr[0];
        for (int i = 1; i < size; i++){
            if (item_checker > arr[i]){
                beautiful = false;
                break;
            }
            item_checker = arr[i];
        }
        cout << (beautiful ? "YES\n" : "NO\n");
        delete[] arr;
    }
    return 0;
}