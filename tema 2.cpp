#include "pch.h"
#include <iostream>
using namespace std;
int main() {
	int n, a, i, j, x, p = 0, u;
	cout << " introduceti numarul de liste:  " << endl;
	cin >> n;
	int **v;
	int *h = new int[n];
	v = new int*[n];
	for (i = 0; i < n; i++) {
		cout << "cate elemente are lista ?" << endl;
		cin >> a;
		v[i] = new int[a];
		h[i] = a;
		cout << "introduceti elementele " << endl;
		for (j = 0; j < a; j++) {
			cin >> x;
			p++;
			v[i][j] = x;
		}
	}
	int f = 0, aux;
	int *z = new int[p];
	for (i = 0; i < n; i++) {
		for (j = 0; j < h[i]; j++) {
			z[f] = v[i][j];
			f++;
		}
	}
	for (i = 0; i < p; i++) {
		for (j = i; j < p; j++) {
			if (z[i] > z[j]) {
				aux = z[i];
				z[i] = z[j];
				z[j] = aux;
			}
		}
	}

	cout << "numerele sortate sunt : " << endl;
	for (i = 0; i < p; i++) {
		cout << z[i] << endl;
	}
	delete[]v;
	delete[] h;
	delete[] z;
	system("pause");
	return 0;
}
