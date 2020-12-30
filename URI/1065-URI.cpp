#include <bits/stdc++.h>
using namespace std;

int main() {

	vector<int> v;
	for (int i = 0; i < 5; i++) {
		int a;
		cin >> a;
		if (a%2 == 0) v.push_back(a); 
	}

	cout << v.size() << " valores pares\n";
	return 0;
}