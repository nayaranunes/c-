#include <iostream>
 
using namespace std;
 
int main() {
 
    do {
        int a = 0, b = 0;

        cin >> a >> b;

        if (a == 0 || b == 0) {
            return 0;
        }

        if (a > 0 && b > 0)
            cout << "primeiro\n";
        
        if (a < 0 && b > 0)
            cout << "segundo\n";
        
        if (a < 0 && b < 0)
            cout << "terceiro\n";
        
        if (a > 0 && b < 0)
            cout << "quarto\n";
        
    } while(1);
    
    return 0;
}