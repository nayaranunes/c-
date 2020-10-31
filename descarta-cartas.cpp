/*
Suponha uma sequência de N cartas numeradas de 1 a N.

Para cada carta, você irá ou descartá-la ou passar ela pro final, alternadamente.
Começa jogando a carta fora, depois passa a próxima para o final, depois descarta a próxima, 
depois passa pro final, e assim sucessivamente até que só sobre uma carta.
Seu programa deve informar qual carta sobrará, dado o número N.
A entrada finaliza quando N = 0.

Exemplo de entrada:
7
19
10
6
0

Exemplo de saída:
6
6
4
4

No primeiro caso acontece o seguinte:

Você tem as cartas numeradas de 1 a 7

1 2 3 4 5 6 7
Descarta a 1
2 3 4 5 6 7 
Passa a 2 para o final
3 4 5 6 7 2
Descarta a 3
4 5 6 7 2
Passa a 4 para o final
5 6 7 2 4
Descarta a 5
6 7 2 4
Passa a 6 pro fim
7 2 4 6
Descarta a 7
2 4 6
Passa a 2 pro fim
4 6 2
Descarta a 4
6 2
Passa a 6 pro fim
2 6
Descarta a 2
Sobra apenas a carta de número 6, e por isso a saída é 6
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	vector <int> v;
	
	for (int i = 0; ; i++) {
		int N;	
		cin >> N;		

		if (N <= 0) {
			break;		
		}	
		
		v.push_back(N);	
	}
	
	//percorre each N
	for (int i = 0; i < v.size(); i++) {
		
		queue<int> fila;
		int j = 1;
		
		while (j <= v[i]) { //1 ate N	
				
			fila.push(j);
			j++;				
		}

		while (fila.size() != 1) {
			//cout << "Descartando => " << fila.front() << endl;
			fila.pop();
			//cout << "Final da fila => " << fila.front() << endl;
			fila.push(fila.front());
			fila.pop(); 
		}
		
		cout << "Carta sobrevivente => " << fila.front() << '\n';
	}

	return 0;
}
