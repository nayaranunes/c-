#include <bits/stdc++.h>
using namespace std;

int le_dia() {

	string a; int num;
	cin >> a >> num;
	return num;  
}

int subtrai(int fim, int ini, int* pegaum, int peso) {

	if (fim >= ini) {
		return fim - ini;
	} else {
		
		*pegaum -= 1;

		return (peso - ini) + fim;
	}

}

int main() {

	int ini_h = 0, ini_m = 0, ini_s = 0;
	int fim_h = 0, fim_m = 0, fim_s = 0;
	char a;
	int ini = le_dia();
	cin >> ini_h >> a >> ini_m >> a >> ini_s;
	int fim = le_dia();
	cin >> fim_h >> a >> fim_m >> a >> fim_s;

	int pegaum = 0;
	int seg = subtrai(fim_s, ini_s, &fim_m, 60);
	int min = subtrai(fim_m, ini_m, &fim_h, 60);
	int hora = subtrai(fim_h, ini_h, &fim, 24);
	int dia = fim - ini;

	cout << dia << " dia(s)\n" << hora << " hora(s)\n";
	cout << min << " minuto(s)\n" << seg << " segundo(s)\n";
	return 0;
}