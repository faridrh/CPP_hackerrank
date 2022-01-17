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
        unsigned int Ax;
        char s[64],s2[64];
        sprintf(s,"%fA",A);
        Ax= atof(s);
        printf("%#0x\n", Ax);
        sprintf(s2,"%+15.2f",B);
        for (int i =0; i<15;i++){
            if (s2[i]==' '){
                s2[i]='_';
            }
        }
        printf("%s\n",s2);
        printf("%.9E\n",C);
	}
	return 0;

}
