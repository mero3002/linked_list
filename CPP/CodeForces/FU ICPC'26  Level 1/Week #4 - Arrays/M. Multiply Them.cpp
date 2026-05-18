#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long rows1;
    long long cols1;
    cin >> rows1 >> cols1;
    vector<vector<long long>> a(rows1, vector<long long>(cols1, 0));
    for (long long i = 0; i < rows1; i++){
        for (long long j = 0; j < cols1; j++){
            cin >> a[i][j];
        }
    }

    long long cols2;
    long long rows2;
    cin >> rows2 >> cols2;
    vector<vector<long long>> b(rows2, vector<long long>(cols2, 0));
    for (long long i = 0; i < rows2; i++){
        for (long long j = 0; j < cols2; j++){
            cin >> b[i][j];
        }
    }

    if (rows2 != cols1){
        cout << "IMPOSSIBLE\n";
        return 0;
    }

    vector<vector<long long>> c(rows1, vector<long long>(cols2, 0));
    long long element;
    long long matrix_c_cols_iterator = 0;
    for (long long i = 0; i < rows1; i++, matrix_c_cols_iterator = 0){
        for (long long k = 0; k < cols2; k++){
            element = 0;
            for (long long j = 0; j < cols1; j++){
                element += a[i][j] * b[j][k];
                // cout << "c[" << i << "][" << j << "] += "
                //      << a[i][j] << " * " << b[j][k] << endl;
        }
        c[i][matrix_c_cols_iterator] = element;
        matrix_c_cols_iterator++;
        }
    }

    for (long long i = 0; i < rows1; i++){
        for (long long j = 0; j < cols2; j++){
            cout << c[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}