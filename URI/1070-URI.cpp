#include <bits/stdc++.h>
using namespace std;

int main() {

	int x, i = 0;

	cin >> x;

	if (x % 2 == 0){
		i = x + 1;
	} else { 
		i = x;
	}

	for (int cont = 0; cont != 6; cont++) {
		
		cout << i << endl;
		i += 2;
	}
	return 0;
}