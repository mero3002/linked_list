#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    string equation;
    cin >> equation;

    float a = equation[0] - '0';
    float b = equation[2] - '0';
    float c = equation[4] - '0';

    float x;

    char sign = equation[1];
    switch(sign){
        case '+':{
            if (a + b == c){
                cout << "CORRECT";
            }
            else {
                x = c - a;
                cout << a << '+' << x << '=' << c;
            }
            break;
        }
        case '-':{
            if (a - b == c){
                cout << "CORRECT";
            }
            else {
                x = a - c;
                cout << a << '-' << x << '=' << c;
            }
            break;
        }
        case '*':{
            if (a * b == c){
                cout << "CORRECT";
            }
            else {
                x = c / a;
                cout << a << '*' << x << '=' << c;
            }
            break;
        }
        case '/':{
            if (a / b == c){
                cout << "CORRECT";
            }
            else {
                x = c * a;
                x = pow(x, -1);
                cout << a << '/' << x << '=' << c;
            }
            break;
        default:{
            break;
            }
        }
    }
    return 0;
}