#include <bits/stdc++.h>
using namespace std;

int main() {

	int x, y;

	cin >> x >> y;

	if (x == y) {
		cout << "0\n";
		return 0;
	}

	if (y > x) {
		int aux = x;
		x = y;
		y = aux;
	} 

	vector<int> v;

	for (int i = 1; y+i < x; i++) {

		if ((y+i) % 2 != 0) {
			cout << "   " << y+i << endl;
			v.push_back(y+i);
		}
	}

	cout << accumulate(v.begin(), v.end(), 0) << endl;
	return 0;
}