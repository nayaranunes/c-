#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	vector<int><int> todos;

	for (int i = 0; ; ++i) {
		int x, y;
		cin >> x >> y;
		if (x<=0 || y <=0) break;
		if (y > x) {
			int aux = x;
			x = y;
			y = aux;
		}
		vector<int> v;

		while (y<=x) {
			int j = 0;
			v.push_back(y+j);
			j++;
		}
		sort (v.begin(), v.end());
		
	}

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}

	return 0;
}