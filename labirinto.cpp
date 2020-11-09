/*
Te será dado um mapa de dimensões N por M.
Cada posição desse mapa contém ou um caractere ".", ou um caractere "#", ou um caractere "P" ou um caractere "D".
Uma posição que contenha o caractere "." indica uma posição livre.
Uma posição que contenha o caractere "#" indica uma posição bloqueada.
Existe exatamente uma posição com a letra "P" indicando que esse é seu ponto de partida.
E existe exatamente uma posição com a letra "D" indicando sua posição de destino.

Seu código deve responder "S" se for possível sair de "P" e chegar em "D", ou "N" caso contrário.
Você só pode andar em posições que contenham "." e estando em uma determinada posição do mapa, 
você só poderá seguir nas direções norte, sul, leste e oeste, andando sempre UMA posição por vez.
Não é possível andar em posições que estejam fora do mapa.

Entrada:
A primeira linha contém os inteiros N e M explicados acima.
Seguem-se N linhas, com M caracteres, conforme descritos.

Saída:
Imprima "S" ou "N" na tela, segundo dito no enunciado.

Exemplo de entrada:
4 5
P..#.
..#..
.#...
#...D

Exemplo de saída:
N

Exemplo de entrada:
P...#
...#.
..#..
.#...
....D

Exemplo de saída:
S
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, m;

	vector<int> p(1), d(1);

	cin >> n >> m;
	char matriz[n][m];

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			
				cin >> matriz[i][j];

			char a = matriz[i][j];

			if (a != 'P' && a != 'D' && a != '#' && a != '.') {
				cout << "Entrada invalida" << endl;
				return 0;
			}

			if (a == 'P') {
				p[0] = i;
				p[1] = j;
			}

			if (a == 'D') {
				d[0] = i;
				d[1] = j;
			}
		}
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}		

	cout << p[0] << " " << p[1] << endl;
	cout << d[0] << " " << d[1] << endl;

	int posP = p[0] + p[1], posD = d[0] + d[1];
	int linhaP = p[0], colunaP = p[1], linhaD = d[0], colunaD = d[1];

	while (matriz[linhaP][colunaP] != matriz[linhaD][colunaD]) {

		cout << "P [" << linhaP << "][" << colunaP << "] D[" << linhaD << "][" << colunaD << "]"<< endl;
			
		if (posP < posD ) {
			if (colunaP < colunaD) {
				if (matriz[linhaP][colunaP+1] != '#') { //leste
					matriz[linhaP][colunaP+1] = 'P';
					matriz[linhaP][colunaP] = '.';
					colunaP++;
					cout << "leste";
				} else {
					if (matriz[linhaP+1][colunaP] != '#') { //sul
						matriz[linhaP+1][colunaP] = 'P';
						matriz[linhaP][colunaP] = '.';
						linhaP++;
						cout << "sul";
					}
				}
			}
		}

		if (posP > posD) {
			if (colunaP > colunaD) {
				if (matriz[linhaP][colunaP-1] != '#') { //oeste
					matriz[linhaP][colunaP-1] = 'P';
					matriz[linhaP][colunaP] = '.';
					colunaP--;
					cout << "oeste";
				} else {
					if (matriz[linhaP-1][colunaP] != '#') { //norte
						matriz[linhaP-1][colunaP] = 'P';
						matriz[linhaP][colunaP] = '.';
						linhaP--;
						cout << "norte";
					}
				}
			}
		}

		// if (posP == posD) {
			
		// }

		if (linhaP < 1 || linhaP > n || colunaD < 1 || colunaD > m) {
			cout << "N" << endl;
			return 0;
		}
	}

	cout << "S";

	return 0;
}