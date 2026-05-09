#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    string equation;
    cin >> equation;

    int a = stoi(equation);
    char sign = equation[to_string(a).length()];
    equation = equation.erase(0, to_string(a).length() + 1);

    int b = stoi(equation);
    equation = equation.erase(0, to_string(b).length() + 1);

    int c = stoi(equation);

    float x;
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