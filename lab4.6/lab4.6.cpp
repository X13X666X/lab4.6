#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double P, S;
    int n, k;
    P = 1;
    n = 1;

    //while

    while (n <= 10) {
        S = 0.0;
        k = n;
        while (k <= 10) {
            S += cos(k);
            k++;
        }
        P *= (sin(n) + S) / (1 + cos(n));
        n++;
    }
    cout << "while: " << P << endl;

    //do-while
    P = 1;
    n = 1;
    do {
        S = 0.0;
        k = n;
        do {
            S += cos(k);
            k++;
        } while (k <= 10);
        P *= (sin(n) + S) / (1 + cos(n));
        n++;
    } while (n <= 10);
    cout << "do-while: " << P << endl;

    // for(++)
    P = 1;
    for (n = 1; n <= 10; n++) {
        S = 0.0;
        for (k = n; k <= 10; k++) {
            S += cos(k);
        }
        P *= (sin(n) + S) / (1 + cos(n));
    }
    cout << "for (++): " << P << endl;

    // for (--)
    P = 1;
    for (n = 10; n >= 1; n--) {
        S = 0.0;
        for (k = n; k <= 10; k++) {
            S += cos(k);
        }
        P *= (sin(n) + S) / (1 + cos(n));
    }

    cout << "for (--): " << P << endl;


    return 0;
}
