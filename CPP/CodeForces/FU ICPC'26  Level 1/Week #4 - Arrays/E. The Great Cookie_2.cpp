#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<long long> zyad;
    vector<long long> nady;
    vector<long long> tray;

    long long t, size, item;
    cin >> t;
    while (t--){
        cin >> size;
        long long sizeT = size;
        tray.clear();
        zyad.clear();
        nady.clear();
        while (sizeT--){
            cin >> item;
            tray.push_back(item);
        }
        sizeT = size;
        bool toggle = true; // zyad
        while (sizeT--){
            long long max = 0;
        for (long long item : tray){
            if (item > max){
                max = item;
            }
        }
            if (toggle){
                zyad.push_back(max);
                toggle = false;
            }
            else {
                nady.push_back(max);
                toggle = true;
            }
            size_t indexa;
            for (long long i = 0; i < tray.size(); i++){
            if (tray.at(i) == max){
                indexa = i;
                break;
            }
        }
        tray.erase(tray.begin() + indexa);
        }
        int total = 0;
        for (long long item : zyad){
            total += item;
        }
        cout << total << '\n';
        for (long long item : zyad){
            cout << item << ' ';
        }

        cout << '\n';
        total = 0;
        for (long long item : nady){
            total += item;
        }
        cout << total << '\n';
        for (long long item : nady){
            cout << item << ' ';
        }
        cout << '\n';
    }
    return 0;
}