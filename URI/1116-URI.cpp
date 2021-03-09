#include <iostream>
 
using namespace std;
 
int main() {

    int n = 0;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        int a = 0, b = 0;
        cin >> a >> b;

        if (b == 0) {
            cout << "divisao impossivel\n";
            continue;
        }
        if (a == 0) {
            cout << "0.0\n";
            continue;   
        }

        cout << setprecision(1) << fixed << (double) a/b <<"\n";
    }
    return 0;
}