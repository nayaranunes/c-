// Escreva uma função que recebe uma string A 
// formada de números, letras, hífens e pontos, 
// faça um filtro nessa string, retornando apenas as letras, 
// na ordem em que elas apareceram inicialmente

// exemplo:
// Se A = "9.-0as.-v0a."
// Então a sua função deve retornar "asva"

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int teste;
	
	scanf("%d\n",&teste);

	for (int k = 0; k < teste; k++) {
			

		int p1 = 0, p2 = 1;
		bool letra = false, simbolo = false;
		char a[100];
		
		scanf("%[^\n]", a);
		getchar();

		while(a[p2] != '\0') {
		

			if (!(isalpha(a[p1]))) {
				
				simbolo = true;
				

			} else {

				p1++;

			}

			if (isalpha(a[p2])) { //(a[p2] >= 65 && a[p2] <= 90) || (a[p2] >= 97 && a[p2] <= 122)) {
				
				letra = true;

				if (simbolo == true) {
					
					simbolo = false;

					a[p1] = a[p2];
					a[p2] = '-';
					p1++;

				}

			} 

			p2++;
		}	

		a[p1] = '\0';

		cout << a << endl;
	}
}
