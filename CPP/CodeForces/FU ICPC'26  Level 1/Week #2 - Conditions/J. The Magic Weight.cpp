#include <iostream>
using namespace std;
int main(){
    int weight_goal, w1, w2, w3;
    cin >> weight_goal >> w1 >> w2 >> w3;

    if (
        w1 == weight_goal
        || w2 == weight_goal
        || w3 == weight_goal
        || w1 + w2 == weight_goal 
        || w1 + w3 == weight_goal
        || w2 + w3 == weight_goal
        || w1 + w2 + w3 == weight_goal
    ){
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}