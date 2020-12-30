#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n; 

	for(int i = 1; i <= n; i++) {
		int a, b, c, medio = 0;
		cin >> a >> b >> c;

		if ((a > b && a < c) || (a > c && a < b)) medio = a;
		if ((b > a && b < c) || (b > c && b < a)) medio = b;
		if ((c > a && c < b) || (c > b && c < a)) medio = c;

		cout << "Case " << i << ": "<< medio << endl;
	}

	return 0;
}