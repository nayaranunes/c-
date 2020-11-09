/*
Será dado para cada letra do alfabeto um valor numérico (apenas letras minusculas).
Depois, será dado uma lista de N palavras, formadas apenas de letras minusculas.
Ordene em forma crescente a lista segundo o valor* das palavras.
Em caso de empate, ganha a que tiver sido primeiramente informada na entrada

*: O valor de uma palavra é a soma do valor numérico das letras que a formam.

Entrada:
A entrada se inicia com 26 linhas formadas por uma letra minúscula L e um número inteiro I, 
indicando que a letra L tem valor I. Em seguida, haverá uma linha contendo um inteiro N, 
que é a quantidade de palavras. Depois, haverá N linhas, cada uma contendo uma palavra 
formada apenas de letras minúsculas e sem espaço.

Saída:
Mostre as palavras em ordem segundo indicado no enunciado.

Exemplo de entrada:
a 2 b 1 c 3 d 4 e 6 f 5 g 7 h 8 i 9 j 10 k 12 l 11 m 13 n 14 
o 15 p 16 q 17 r 18 s 22 t 21 u 20 v 19 x 23 w 24 y 26 z 25 
4 cdb aabc ra a

Exemplo de saída:
a cdb aabc ra

A palavra "a" vale 2, a "cdb" vale 8, bem como a "aabc", porém a "cdb" foi dada antes na entrada, 
por isso veio primeiro. Por fim, a palavra "ra" vale 20, sendo a maior de todas.

*/

#include <bits/stdc++.h>
using namespace std;

vector<string> str;
vector<int> v;

void merge(int esquerda, int meio, int direita) { 

    int n1 = meio - esquerda + 1; 
    int n2 = direita - meio;
  
    int blocoEsquerdo[n1], blocoDireito[n2];
    string strEsquerda[n1], strDireita[n2]; 

    for(int i = 0; i < n1; i++) {

        blocoEsquerdo[i] = v[esquerda + i];
        strEsquerda[i] = str[esquerda + i]; 
    }

    for(int j = 0; j < n2; j++) {
    
        blocoDireito[j] = v[meio + 1 + j];
        strDireita[j] = str[meio + 1 + j]; 
  	}

    int i = 0;  
    int j = 0;  
    int k = esquerda; 
      
    while (i < n1 && j < n2) { 

        if (blocoEsquerdo[i] <= blocoDireito[j]) { 
            v[k] = blocoEsquerdo[i]; 
            str[k] = strEsquerda[i]; 
            i++; 
        } else {        
            v[k] = blocoDireito[j]; 
            str[k] = strDireita[j];
            j++; 
        } 
        k++; 
    } 

    while (i < n1) { 

        v[k] = blocoEsquerdo[i]; 
        str[k] = strEsquerda[i];
        i++; 
        k++; 
    } 
 
    while (j < n2) {

        v[k] = blocoDireito[j]; 
        str[k] = strDireita[j];
        j++; 
        k++; 
    } 
} 
  
void mergeSort(int esquerda, int direita)  { 
    
    if (esquerda < direita) {

        int meio = esquerda + (direita - esquerda) / 2; 

        mergeSort(esquerda, meio); 
        mergeSort(meio + 1, direita); 
  
        merge(esquerda, meio, direita); 
    } 
} 
  
int valor_letra(char letra, unordered_map<char, int> letras) {
	return letras[letra];
}


int main() {

	unordered_map<char, int> letras;

	for (int i = 0; i < 26; i++) {
	
		int b;
		char a;
		cin >> a >> b;
		letras[a] = b;
	}
	
	//for (auto it = letras.cbegin(); it != letras.cend(); it++) {
	// 	cout << "palavra = " << it->first << " valor = " << it->second << endl;
	// }

	int n;
	cin >> n;

	for (int i = 0; i < n ; ++i) {
        int soma = 0;
        string s;

        cin >> s;
        int t = s.length();

        for (int j = 0 ; j < t; ++j) {
            soma += valor_letra(s[j], letras);
        }
        v.push_back(soma);
        str.push_back(s);
    }

	for (int i = 0; i < n; i++) 
   		cout << "valor =	 " << v[i] << "   palavra = " << str[i] << endl;

    mergeSort(0, n-1);

    cout << "//////////ORDENADO//////////\n";

   	for (int i = 0; i < n; i++) 
   		cout << "valor =	 " << v[i] << "   palavra = " << str[i] << endl;
   	

	return 0;
}
