#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	
	if (n >= 10000) return 0;
	
	vector<int> in, out;
	
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a >= 10 && a <= 20) {
			in.push_back(a);
		} else {
			out.push_back(a);
		}
	}

	cout << in.size() << " in\n" << out.size() << " out\n";
	return 0;
}