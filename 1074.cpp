#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	
	if (n >= 100000) return 0;
	cout << setprecision(1);
	vector<int> v;
	
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	for (int i = 0; i < n; i++) {
		if (v[i] == 0) {
			cout << "NULL\n";
			continue;
		}

		if (v[i] % 2 == 0) {
			if (v[i] > 0) {
				cout << "EVEN POSITIVE\n";
			} else {
				cout << "EVEN NEGATIVE\n";
			}
		} else {
			if (v[i] > 0) {
				cout << "ODD POSITIVE\n";
			} else {
				cout << "ODD NEGATIVE\n";
			}
		}
			
	}

	return 0;
}