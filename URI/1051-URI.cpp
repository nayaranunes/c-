#include <bits/stdc++.h>
using namespace std;

int main() {

    double a;
    cin >> a;
    cout << fixed << setprecision(2);

    if (a < 0) {
        return 0;
    }

    if (a <= 2000.00) {
        cout << "Isento\n";
        return 0;
    }
    
    a -= 2000.00;
    double imposto = 0;

    if (a <= 1000.00) {

        imposto += a * 0.08;

    } else {

        imposto += 80;

        if (a <= 2500.00) {

            imposto += (a - 1000.00) * 0.18;

        } else {
    
            imposto += 270.00;
            imposto += (a - 2500.00) * 0.28;
            
        }
    }  

    cout <<  "R$ " << imposto << endl;
    
    return 0;
}