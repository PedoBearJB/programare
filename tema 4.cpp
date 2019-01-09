#include "pch.h"
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a;
	int*v = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a;
		if ((a >= 0) && (a <= 100))
			v[i] = a;
		else {
			cout << "numarul nu  este intre 0 si 100";
			i--;
		}
	}
	int f, s, t, aux, n1=0, n2=0, n3=0;
	for (int i = 0; i < n; i++) {
		aux = 0;
		for (int j = 0; j < n; j++) {
			if (v[i] == v[j])
				aux++;
		}
		if (aux >= n1) {
			n1 = aux;
			f = v[i];
			continue;
		}
		else if (aux >= n2) {
			n2 = aux;
			s = v[i];
			continue;
		}
		else if (aux >= n3) {
			n3 = aux;
			t = v[i];
		}

	}
	cout << f << endl << s << endl << t << endl;
	return 0;
}
