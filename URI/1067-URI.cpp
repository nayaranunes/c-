#include <bits/stdc++.h>
using namespace std;

int main() {

	int x;

	cin >> x;

	if (x < 1 || x > 1000) return 0;

	for (int i = 1; i <= x; i+=2) {
		cout << i << endl;
	}
	return 0;
}