#include <iostream>
#include <vector>
using namespace std;

long long sumItems(vector<long long> &v){
    long long total = 0;
    for (long long item : v){
        total += item;
    }
    return total;
}

void bubSort(vector<long long> &v){
    int i = 0;
    int j = 1;
    int size = v.size();
    for (int k = 0; k < size; k++){
        for (; j < size; i++, j++){
            if (v.at(i) > v.at(j)){
                swap(v.at(i), v.at(j));
            }
        }
        i = 0;
        j = 1;
    }
}

int main(){
    vector<long long> zyad;
    vector<long long> nady;
    vector<long long> tray;
    vector<long long>* ptr = &tray;

    int t; 
    cin >> t;
    while (t--){
        int size;
        cin >> size;
        while (size--){
            long long item;
            cin >> item;
            tray.push_back(item);
        }

        bubSort(*ptr);
        bool flag = true; // zyad
        for (int i = tray.size() - 1; i > -1; i--){
            if (flag){
                zyad.push_back(tray.at(i));
                flag = false;
            }
            else {
                nady.push_back(tray.at(i));
                flag = true;
            }
        }
        cout << sumItems(zyad);
        cout << '\n';
        for (long long item : zyad){
            cout << item << ' ';
        }

        cout << '\n';
        cout << sumItems(nady);
        cout << '\n';
        for (long long item : nady){
            cout << item << ' ';
        }

        cout << '\n';
        tray.clear();
        zyad.clear();
        nady.clear();
    }
    return 0;
}