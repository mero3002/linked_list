#include <iostream>
using namespace std;
int main(){
    int mark;
    cin >> mark;
    if (mark >= 85){
        cout << "A";
    }
    else if(mark >= 75){
        cout << "B";
    }
    else if(mark >= 65){
        cout << "C";
    }
    else if(mark >= 50){
        cout << "D";
    }
    else {
        cout << "F";
    }

    return 0;
}