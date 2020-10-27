// Escreva um programa que dado um número N, lê N strings e depois exibe essas strings por ordem crescente de frequencia.
// Exemplo de Entrada:
// 7
// aaa
// aaa
// aaa
// aaa
// bbb
// ccc
// ccc

// Exemplo de saída:
// aaa
// ccc
// bbb

// Obs.: Pode assumir que as strings não contém espaços e assuma que "A != a" (case sensitive).

#include <bits/stdc++.h>
using namespace std;

multimap<int, string> invert(map<string, int> & m) {

	multimap<int, string> multiMap;

	for (map<string, int>::iterator it = m.begin(); it != m.end(); it++) {
		multiMap.insert(make_pair(it->second, it->first));
	}

	return multiMap;
}

int main() {

	map<string, int> m;
	
	int n;
	string a;
	
	cin >> n;
	getchar(); //prox geline ler \n

	for (int i = 0; i < n; i++) {

		getline(cin, a);
		m[a] += 1;
	
	}
	
	multimap<int, string> m1 = invert(m);

	float per = 0;

	for (auto it = m1.crbegin(); it != m1.crend(); it++) {
		per =  ((it->first)*100.0)/(float)n;	
		cout << per << "% " << it->second<<'\n';
	}


	 return 0;

}