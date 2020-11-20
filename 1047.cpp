#include <bits/stdc++.h>
using namespace std;

int main() {

    int a;
    cin >> a;

    if (a == 61) cout << "Brasilia\n";
    if (a == 71) cout << "Salvador\n";
    if (a == 11) cout << "Sao Paulo\n";
    if (a == 21) cout << "Rio de Janeiro\n";
    if (a == 32) cout << "Juiz de Fora\n";
    if (a == 19) cout << "Campinas\n";
    if (a == 27) cout << "Vitoria\n";
    if (a == 31) cout << "Belo Horizonte\n";
    if (a != 61 && a != 71 && a != 11 && a != 21 && a != 32 && a != 19 && a != 27 && a != 31) cout << "DDD nao cadastrado\n";
    return 0;
}