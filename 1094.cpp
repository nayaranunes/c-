#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, c = 0, r = 0, s = 0, total = 0;
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		double a;
		cin >> a;
		if (a < 1 || a > 15) return 0;
		total += a;
		char tipo;
		cin >> tipo;
		if (tipo == 'C') c += a;
		if (tipo == 'R') r += a;
		if (tipo == 'S') s += a;
	}
	cout<< setprecision(2) << fixed ;
	cout << "Total: "<< total<<" cobaias\n";
	cout << "Total de coelhos: "<< c << endl;
	cout << "Total de ratos: " << r << endl;
	cout << "Total de sapos: " << s << endl;
	cout << "Percentual de coelhos: "<<  (c/(double)total)*100.00 << " %\n";
	cout << "Percentual de ratos: "<<  (r/(double)total)*100.00  << " %\n";
	cout << "Percentual de sapos: "<<  (s/(double)total)*100.00  << " %\n";

	return 0;
}