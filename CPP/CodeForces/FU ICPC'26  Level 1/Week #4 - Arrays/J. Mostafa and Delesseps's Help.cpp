#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int tt;
    cin >> tt;
    while (tt--){
        int total;
        cin >> total;
        total --;
        vector<int> keys(total);
        for (int i = 0; i < total; i++) cin >> keys[i];
        sort(keys.begin(), keys.end());
        int cur = 1;
        for (int item : keys){
            if (item == cur){
                cur++;
            }
        }
        cout << cur <<'\n';
    }
    return 0;
}