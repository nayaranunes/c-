#include <bits/stdc++.h>
using namespace std;

int main() {

	int cont = 0, cont2 =0, i = 1, j = 7;

	while(cont < 5) {

		while (cont2 < 3) {
			cout << "I=" << i << " J="<< j << endl;	
			cont2 ++;
			j --;
		}
		i +=2;
		j = 7;
		cont2 = 0;
		cont ++;
	}
	
	return 0;
}