#include <iostream>
#include <vector>

using namespace std;

int n = 10;
string numpad;

int getIndex(char value){
    for (int i = 0; i < n; i++){
        if (numpad[i] == value){
            return i;
        }
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<string> ins;
    vector<string> nums;
    string num;
    for (int i = 0; i < n; i++) cin >> numpad[i];
    int tt;
    cin >> tt;
    while (tt--){
        cin >> num;
        nums.push_back(num);
    }
    int finger = 0;
    int index;
    for (string number : nums){
        for (char c : number){
            index = getIndex(c);
            if (index == finger){
                cout << 'x';    
            }
            else if (index > finger){
                for (; finger != index; finger++){
                    cout << '>';
                }
                cout << 'x';
            }
            else {
                for (; finger != index; finger--){
                    cout << '<';
                }
                cout << 'x';
            }
        }
        finger = 0;
        cout << endl;
    }
    return 0;
}