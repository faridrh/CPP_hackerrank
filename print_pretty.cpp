#include <iostream>

#include <iomanip>

using namespace std;

int main() {
    int T;
    cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while (T--) {
        double A;
        cin >> A;
        double B;
        cin >> B;
        double C;
        cin >> C;
        unsigned long Ax;
        char s[32];
        sprintf(s, "%fA", A);
        Ax = atof(s);
        cout.setf(ios::showbase);
        cout.unsetf(ios::uppercase); // unset uppercase
        cout << setfill(' ') << setw(0xf) << left; // align to left
        cout << hex << Ax << endl; // print first number
        cout << setfill('_') << setw(15) << right << setprecision(2) << fixed << showpos << B << endl;
        printf("%.9E\n", C); // keeping as printf to show example
    }
    return 0;

}