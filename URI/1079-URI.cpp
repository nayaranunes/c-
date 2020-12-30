#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	vector<double> v;

	for (int i = 0; i < n; ++i) {
		double a, b, c;
		cin >> a >> b >> c;
		double media = ((a*2)+(b*3)+(c*5))/10.0;
		v.push_back(media);
	}

	cout<< setprecision(1) << fixed ;

	for(auto it = v.cbegin(); it != v.cend(); ++it){
		cout << *it << endl;
	}

	return 0;
}