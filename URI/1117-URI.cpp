#include <bits/stdc++.h>
 
using namespace std;
 
int main() {

    cout << fixed << setprecision(2);
    double media = 0;
    int i = 0;
    do {
        double a;
        cin >> a;
        if (a >= 0 && a <= 10.0) {
            media += a;
            i++;
        }
    } while(i != 2)
    
    cout << (double) media/2 <<"\n";
    
    return 0;
}