#include <bits/stdc++.h>
using namespace std;

int main() {

	vector<int> vpar, vimpar, vneg, vposi;
	for (int i = 0; i < 5; i++) {
		int a;
		cin >> a;
		if (a%2 == 0) { 
			
			vpar.push_back(a); 
		} else if(a != 0) {
			vimpar.push_back(a);
		}
		if (a > 0) {
			vposi.push_back(a);
		} 
		if (a < 0) {
			vneg.push_back(a);
		}
	}

	cout << vpar.size() << " valor(es) par(es)\n";
	cout << vimpar.size() << " valor(es) impar(es)\n";
	cout << vposi.size() << " valor(es) positivo(s)\n";
	cout << vneg.size() << " valor(es) negativo(s)\n";

	return 0;
}