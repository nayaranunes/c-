#include <bits/stdc++.h>
using namespace std;

int main() {

	std::map<int, int> mymap;;

	for (int i = 1; i <= 10; ++i) {
		double a;
		cin >> a;
		mymap[a] = i;
	}
	
	map<int,int>::reverse_iterator rit;
  	for (rit=mymap.rbegin(); rit!=mymap.rend(); ++rit) {
		cout << rit->first << '\n' << rit->second << '\n';
		break;
  	}

	return 0;
}