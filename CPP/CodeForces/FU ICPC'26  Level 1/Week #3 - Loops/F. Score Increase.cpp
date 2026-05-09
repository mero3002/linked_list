#include <iostream>
using namespace std;
int main(){
    int rounds;
    int happy = 0;
    long long int score_1;
    long long int score_2;

    cin >> rounds;
    cin >> score_1;
    rounds--;

    while (rounds--){
        cin >> score_2;
        if (score_2 > score_1){
            happy++;
        }
        score_1 = score_2;
    }
    cout << happy;
    return 0;
}