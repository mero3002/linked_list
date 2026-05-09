#include <iostream>
#include <vector>
using namespace std;

long long int readRounds(){
    long long int rounds;
    cin >> rounds;
    return rounds;
}

vector<int> readScores(long long int rounds){
    vector<int> scores;
    int score;
    while (rounds--){
        cin >> score;
        scores.push_back(score);
    }
    return scores;
}

long long int getHighest(vector<int> scores){
    int highest = 0;
    for (int score : scores){
        if (score > highest){
            highest = score;
        }
    }
    return highest;
}

int main(){
    cout << getHighest(readScores(readRounds()));
    // int rounds;
    // int score;
    // vector<int> scores;

    // cin >> rounds;
    // while(rounds--){
    //     cin >> score;
    //     scores.push_back(score);
    // }

    // int highest = scores.at(0);
    // for (int score : scores){
    //     if (score > highest){
    //         highest = score;
    //     }
    // }

    // cout << highest;

    return 0;
}