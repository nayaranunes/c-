#include <bits/stdc++.h>
using namespace std;

void le_strings(int n) {
	
	string a;
	getline(cin,a);
	for (int i = 0; i < n; ++i) {
		getline(cin,a);
	}
}

int main() {

	int cont = 1, nr, n, p;
	double v, c = 0;
	string m;
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	while (cin >> n >> p && (n || p)) {
					
		le_strings(n);

		string marca = "\0";
		double valor = 0.0, compliance = 0.0;
		
		for (int i = 1; i <= p; ++i) {	

			getline(cin, m);
			cin >> v >> nr;
			c = (double)nr/(double)n;


			if (c > compliance) {
				compliance = c;
				marca = m;
				valor = v;
			} 
			if (c == compliance && v < valor){
				marca = m;
				valor = v;
				compliance = c;
			}
			le_strings(nr);
		}
		
		if (cont > 1) cout << "\n";
        cout << "RFP #" << cont << "\n" << marca << "\n";
        cont++;
	}
	
	return 0;
}