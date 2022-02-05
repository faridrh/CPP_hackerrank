#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        unsigned long  Ax;
        char s[32],s2[32];
        sprintf(s,"%fA",A);
        Ax= atof(s);
       //cout.setf ( ios::showbase ); 
       cout.unsetf(ios::uppercase);// unset uppercase
        cout << setw(0xf)<<left; // align to left
        cout <<hex<<Ax<< endl; 
        cout << setfill ('_')<< setw(15) << B;
        //sprintf(s2,"%+15.2f",B);
       /* for (int i =0; i<15;i++){
            if (s2[i]==' '){
                s2[i]='_';
            }
        }*/
        printf("%s\n",s2);
        printf("%.9E\n",C);
	}
	return 0;

}
