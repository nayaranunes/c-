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

int direcao_i[] = {1, -1, 0, 0};
int direcao_j[] = {0, 0, -1, 1};

bool val(int i, int j) {
	return (i >= 0 && i < n) && (j >= 0 && j < m) && mapa[i][j] == '.';
}

void solve(int i, int j) {

	if (!val(i, j)) return;
	
	mapa[i][j] = '#';
	
	for (int k = 0 ; k < 4; ++k) {
		solve(i + direcao_i[k], j + direcao_j[k]);
	}
}

int main() {
	
	int achei = 0;
	
	cin >> n >> m;

	for (int i = 0; i < n; ++i) {
		for (int j = 0 ; j < m; ++j) {
			cin >> mapa[i][j];
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0 ; j < m; ++j) {
			if (mapa[i][j] == '.') {
				achei++;
				solve(i,j);
				for (int k = 0; k < n; ++k) {
					for (int l = 0; l < m; ++l) {
						cout << mapa[k][l];
					}
					cout << endl;
				}
			}
		}
	}

	cout << "Numero de comodos: " << achei << endl;	
	
	return 0;		
}