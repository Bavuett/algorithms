#include <iostream>
using namespace std;

int main() {
    int a = 4, b = 5, c = 6, d = 7, e = 8, n = 0, m = 0;

    n = (a % b) * (c % (e / d));
    m = ((a % b) * (c % d)) - e;

    if (m % 2 == 0) {
        n = n + 1;
    } else {
        m = m + 2;
    }

    for (int i = 0; i < m; i = i + m / 8) {
        cout << "Ciao ";
    }

    cout << endl; 

    cout << "n = " << n << endl;
    cout << "m = " << m << endl;
}