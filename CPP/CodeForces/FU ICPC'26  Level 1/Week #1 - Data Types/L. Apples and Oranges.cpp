#include <iostream>
using namespace std;
int main(){
    int apples, oranges;
    float a_price, o_price;
    cin >> apples >> a_price >> oranges >> o_price;
    cout << (apples * a_price) + (oranges * o_price);
    return 0;
}