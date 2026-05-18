#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    long long quality, n;
    cin >> tt;
    while (tt--){
        cin >> n;
        vector<long long> q(n);
        for (int i = 0; i < n; i++){
            cin >> quality;
            q.at(i) = quality;
        }
        bool equals = true;
        for (int i = 0; i < n - 1; i++){
            if (q.at(i) == q.at(i + 1)){
                continue;
            }
            else {
                equals = false;
                break;
            }
        }
        sort(q.begin(), q.end());
        if (n < 2 || equals){
            cout << "none" << endl;
        }
        else {
            for (int i = 1; i < n; i++){
                if (q.at(i) > q.at(0)){
                    cout << q.at(i) << endl;
                    break;
                }
            }
        }
        q.clear();
    }
    return 0;
}