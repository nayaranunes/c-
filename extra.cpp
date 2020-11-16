/*
Será dado um mapa de uma casa formado de caracteres
 ".", ou "#", ou "-", de dimensoes N por M.
A posição com caractere "." indica uma posicão livre, 
enquanto que a posição com "#" indica uma parede 
e a posição com "-" indica uma porta.
Conte quantos comodos há na casa, sabendo que só é 
possível andar nas posições livres e nas direções norte, sul, leste e oeste.

Exemplo de entrada:
7 7
#######
#..#..#
#..-..#
#####-#
#.....#
#.....#
#######

Exemplo de saída:
3
*/

#include <bits/stdc++.h>
using namespace std;

char mapa[505][505];

int n;
int m;
int comodo;

int ult_ponto_i, ult_ponto_j;

int direcao_i[] = {1, -1, 0, 0};
int direcao_j[] = {0, 0, -1, 1};

bool val(int i, int j) {
	
	if (mapa[i][j] == '-') {
		if (!(i == 0 || j == 0 || i == n || j == m)) { //porta na borda
			comodo++;
		} 
		mapa[i][j] = '#';
	} 

	return (i >= 0 && i < n) && (j >= 0 && j < m) && mapa[i][j] != '#';
}

bool solve(int i, int j) {

	if (!val(i, j)) return false;
	if (i == ult_ponto_i && j == ult_ponto_j) return true;
	
	mapa[i][j] = '#';
	for (int k = 0 ; k < 4; ++k) {
		if (solve(i + direcao_i[k], j + direcao_j[k])) {
			return true;
		}
	}
	return false;
}

int main() {
	
	int ponto_i, ponto_j, achei = 0;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		for (int j = 0 ; j < m; ++j) {
			cin >> mapa[i][j];
			if (mapa[i][j] == '.' && achei == 0) {
				achei++;
				ponto_i = i, ponto_j = j;
			}
			if (mapa[i][j] == '.') {
				ult_ponto_i = i, ult_ponto_j = j;
			}
		}
	}

	solve(ponto_i, ponto_j);
	cout << "numero de comodos: " << comodo+1 << endl;	
	
	return 0;		
}