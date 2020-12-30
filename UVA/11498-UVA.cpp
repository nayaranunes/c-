#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	int x, y, x1, y1;

	while(cin >> n && n != 0) {
		cin >> x >> y;
		for (int i = 0; i < n; i++) {
			cin >> x1 >> y1;
			if (x == x1 || y == y1) {
				cout << "divisa\n";
				continue;
			}
			if (x1 < x && y1 > y) {
				cout << "NO\n";
				continue;
			}
			if (x1 > x && y1 > y) {
				cout << "NE\n";
				continue;
			}
			if (x1 > x && y1 < y) {
				cout << "SE\n";
				continue;
			}
			if (x1 < x && y1 < y) {
				cout << "SO\n";
				continue;
			}
		}

	}
	
	return 0;
}