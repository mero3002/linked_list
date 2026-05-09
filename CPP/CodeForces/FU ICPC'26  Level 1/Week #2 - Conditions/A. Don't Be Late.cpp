#include <iostream>
#include <string>
using namespace std;
int main(){
    string instructor, student, ins, st;
    cin >> instructor;
    cin >> student;

    for (int i = 0; i < 5; i++){
        if (i == 2){
            continue;
        }
        ins += instructor[i];
        st += student[i];
    }
    if (stoi(st) > stoi(ins)){
        cout << "NO";
    }
    else {
        cout << "YES";
    }
    return 0;
}