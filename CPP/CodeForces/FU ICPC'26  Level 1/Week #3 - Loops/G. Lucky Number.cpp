#include <iostream>
#include <vector>
using namespace std;

vector<long long int> readScores(long long int rounds){
    long long int score;
    vector<long long int> scores;
    
    while (rounds--){
        cin >> score;
        scores.push_back(score);
    }
    return scores;
}

long long int countDivisibles(vector<long long int> scores, long long int lucky_number){
    long long int divisibles = 0;
    for (long long int score : scores){
        if (score % lucky_number == 0){
            divisibles++;
        }
    }
    return divisibles;
}

int main(){
    long long int rounds, lucky_number;
    cin >> rounds >> lucky_number;
    cout << countDivisibles(readScores(rounds), lucky_number);
    return 0;
}