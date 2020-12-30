#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	
	if (n >= 100000) return 0;

	for (int i = 0; i < 10000; i++) {
		if (i%n == 2) cout << i << endl;
	}

	return 0;
}

// SOLUCAO MELHOR
int main() {

	int n;
	cin >> n;
	
	if (n >= 100000) return 0;

	for (int i = 2; i < 10000; i+=n) {
		cout << i << endl;
	}
	
	return 0;
}