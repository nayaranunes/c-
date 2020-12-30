#include <bits/stdc++.h>
using namespace std;

int main() {

	vector<double> v;
	for (int i = 0; i < 6; i++) {
		double a;
		cin >> a;
		if (a > 0) {
			v.push_back(a);
		}
	}

	cout << v.size() << " valores positivos\n";

	return 0;
}
