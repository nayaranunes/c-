#include <iostream>
 
using namespace std;
 
int main() {
 
    do {
        int a = 0;

        cin >> a;

        if (a == 2002) {
            cout << "Acesso Permitido\n";
            return 0;
        }

        cout << "Senha Invalida\n";
        
    } while(1);
    
    return 0;
}