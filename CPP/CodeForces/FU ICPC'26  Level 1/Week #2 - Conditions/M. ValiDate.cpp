#include <iostream>
using namespace std;

bool is_leap(int year){
    if (year % 100 == 0){
        if (year % 4 == 0 && year % 400 == 0){
            return true;
        }
        return false;
    }
    if (year % 4 == 0){
        return true;
    }
}

bool is_31(int month){
    switch(month){
        case 1: {
            return true;
        }
        case 3: {
            return true;
        }
        case 5: {
            return true;
        }
        case 7: {
            return true;
        }
        case 8: {
            return true;
        }
        case 10: {
            return true;
        }
        case 12: {
            return true;
        }
        default: {
            return false;
        }
    }
}

bool is_30(int month){
    if (month == 2){
        return false;
    }
    return true;
}

int main(){
    int day, month, year;
    cin >> day >> month >> year;

    if (day == 31){
        if (!is_31(month)){
            cout << "INVALID";
            return 0;
        }
    }

    if (day == 30){
        if (!is_30(month)){
            cout << "INVALID";
            return 0;
        }
    }

    if (month == 2){
        if (day == 29){
            if (!is_leap(year)){
                cout << "INVALID";
                return 0;
            }
        }
    }

    cout << "VALID";

    return 0;
}