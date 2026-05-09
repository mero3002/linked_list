#include <iostream>
using namespace std;
// 1. Flip the state of a
// 2. Flip the state of b
// 3. Flip the state of c
// 4. Flip the states of all three switches.
// 5. Flip the states of only the switches that are currently ON.
int main(){
    bool a, b, c;
    int option;
    cin >> a >> b >> c >> option;
    switch(option){
        case 1:{
            a = !(a);
            break;
        }
        case 2:{
            b = !(b);
            break;
        }
        case 3:{
            c = !(c);
            break;
        }
        case 4:{
            a = !(a);
            b = !(b);
            c = !(c);
            break;
        }
        case 5:{
            bool* arr[] = {&a, &b, &c};
            for (int i = 0; i < 3; i++){
                if (*arr[i] == 1){
                    *arr[i] = !(arr[i]);
                }
            }
            break;
        }
    }
    cout << a << ' ' << b << ' ' << c;
    return 0;
}