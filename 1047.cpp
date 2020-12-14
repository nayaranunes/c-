#include <bits/stdc++.h>
using namespace std;

int main() {

    int h1, m1, h2, m2, duracao;
    
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    int min1 = (h1*60) + m1, min2 = (h2*60) + m2;
    
    duracao = abs(min2 - min1);
    
    if (h1 == h2 && m1 == m2) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        return 0;
    }
    
    if (min1 > min2) { 
        if (duracao % 60 == 0) {
            printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n", 24 - (duracao/60));
            return 0;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 23 - (duracao/60), 60 - (duracao%60));
    } else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao/60, duracao%60);
        
    return 0;
}