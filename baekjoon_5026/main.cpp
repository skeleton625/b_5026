#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

int t, n[2], turn, n1;
char i1[9];
int main() {
	cin >> t;
	while (t--) {
		cin >> i1;
		if (i1[0] == 'P') cout << "skipped" << endl;
		else {
			turn = 0; n1 = 0;
			for (int i = 0; i < strlen(i1); i++) {
				if (i1[i]=='+') turn++;
				else n[turn]++;
			}
			turn = 0;
			for (int i = 0; i < strlen(i1); i++) {
				if (i1[i] == '+') turn++;
				else n1 += (i1[i] - '0')*pow(10, --n[turn]);
			}
			cout << n1 << endl;
		}
	}
	return 0;
}