#include <bits/stdc++.h>
using namespace std;

int main() {

	int cont = 0;
	double i = 0, j = 1, aux = 0;

	while(1) {
		if ((aux+=0.2) > 2.2) break;

		while (cont < 3) {
			cout << "I=" << i << " J="<< j << endl;	
			cont ++;
			j++;
		}
		i += 0.2;			
		j -= 2.8;
		cont = 0;
		aux = i;
	}
	
	return 0;
}