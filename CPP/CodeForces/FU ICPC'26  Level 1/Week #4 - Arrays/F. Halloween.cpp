#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<long long> p;
	vector<long long> q;
	vector<long long> temp_q;
	int t;
	long long item;
	cin >> t;
	while (t--){
		int size;
		cin >> size;
		for (int i = 0; i < size; i++){
			cin >> item;
			p.push_back(item);
		}
		for (int i = 0; i < size; i++){
			cin >> item;
			q.push_back(item);
		}
		temp_q = q;
		for (long long item : q){
			temp_q.push_back(item);
		}

		// cout << '\n';
		// for (long long item : temp_q){
		// 	cout << item << ' ';
		// }
		// cout << '\n';

		int j = 0;
		bool found = false;
		for (int i = 0; i < size * 2; i++){
			if (j == size - 1){
				found = true;
				break;
			}
			if (p.at(j) == temp_q.at(i)){
				j++;
			}
			else {
				j = 0;
			}
		}
		if (found){
			cout << "CHANGE\n";
		}
		else {
			cout << "TRICK OR TREAT\n";
		}
		p.clear();
		q.clear();
		temp_q.clear();
	}
	return 0;
}