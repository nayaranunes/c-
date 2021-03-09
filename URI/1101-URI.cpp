#include <iostream>
 
using namespace std;
 
int main() {
 
    int maior = 0, menor = 0;
    do {
        int a = 0, b = 0;

        cin >> a;
        cin >> b;

        if (a <= 0 || b <= 0) break;

        if (a == b) {
            cout << a << " Sum=" << a <<"\n";
            return 0;
        }

        if (a > b) {
            maior = a;
            menor = b;
        } else {
            maior = b;
            menor = a;
        }
        int soma = 0;
        for (int i = menor; menor <= maior; ++i) {
            cout << menor << " ";
            soma += menor;
            menor++;
        }
        cout << "Sum=" << soma <<"\n";
    } while(1);
    
    return 0;
}