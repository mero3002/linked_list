#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    string something;
    getline(cin, something);

    int up = 0;
    int low = 0;
    for (char c : something){
        if (isupper(c)){
            up++;
        }
    else {
            low++;
        }
    }

    if (up > low){
        for (char &c : something){
            c = toupper(c);
        }
    }
    else {
        for (char &c : something){
            c = tolower(c);
        }
    }

    cout << something;

    return 0;
}