#include <iostream>
int main(){
    int int_var;
    long long int long_var;
    char char_var;
    float float_var;
    double double_var;

    std::cin >> int_var >> long_var >> char_var >> float_var >> double_var;

    std::cout << "Integer: " << int_var << '\n';
    std::cout << "Long Long: " << long_var << '\n';
    std::cout << "Character: " << char_var << '\n';
    std::cout << "Float: " << float_var << '\n';
    std::cout << "Double: " << double_var << '\n';
    return 0;
}