#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	vector<int> v;

	for (int i = 0; i < n; ++i) {
		int x, y, soma = 0;
		cin >> x >> y;
		
		if (y > x) {
			int aux = x;
			x = y;
			y = aux;
		}

		if (x==y) {
			v.push_back(0);
		} else {
			while (x>y) {
				int j = 1;
				if((y+j) % 2 != 0 && (y+j != x)) {
					soma+=y+j;
				}
				y+=j;
				j++;
			}

			v.push_back(soma);
		}
	}
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}

	return 0;
}