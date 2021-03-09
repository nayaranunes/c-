#include <iostream>
 
using namespace std;
 
int main() {
 
    do {
        int a = 0, b = 0;

        cin >> a;
        cin >> b;

        if (a == b) {
            return 0;
        }

        if (a > b) {
            cout << "Decrescente\n";
        } else {
            cout << "Crescente\n";

        }
    } while(1);
    
    return 0;
}