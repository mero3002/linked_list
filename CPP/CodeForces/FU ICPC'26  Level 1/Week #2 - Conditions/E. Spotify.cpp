#include <iostream>
#include <string>
using namespace std;
int main(){
    string artist;
    getline(cin, artist);
    // cin.ignore(1, '\n');
    if (artist == "Amr Diab" || artist == "AMR DIAB"){
        cout << "NO DIAB FOR YOU";
    }
    else {
        cout << "LISTEN ALONG";
    }
    return 0;
}