#include <iostream>
using namespace std;
int main(){
    long long int n1, n2;
    char op;
    cin >> n1 >> op >> n2;

    switch(op){
        case '+':{
            cout << n1 + n2;
            break;
        }
        case '-':{
            cout << n1 - n2;
            break;
        }
        case '*':{
            cout << n1 * n2;
            break;
        }
        case '/':{
            if (n2 == 0){
                cout << "Error";
            }
            else{
                cout << n1 / n2;
            }
            break;
        }
        case '%':{
            cout << n1 % n2;
            break;
        }
        default:{
            cout << "Error";
        }
    }
    return 0;
}