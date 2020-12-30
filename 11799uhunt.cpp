#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n, t, speed = 0, maior = 0;
	cin >> t;

	for (int i = 1; i <= t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> speed;
			if (speed > maior) maior = speed;
		}
		cout << "Case " << i << ": " << maior << "\n";
		maior = 0;
	}
	
	return 0;
}