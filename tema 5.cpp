#include "pch.h"
#include <iostream>
using namespace std;
struct elem {
	int linie, coloana,  valoare;
};
int main() {
	int n;
	cin >> n;
	elem*e = new elem[n];
	for (int i = 0; i < n; i++) {
		cin >> e[i].linie >> e[i].coloana >> e[i].valoare;
	}   
	int l=0, c=0;
	for (int i = 0; i < n; i++) {
 		if (e[i].linie > l)
			l = e[i].linie;
		if (e[i].coloana > c)
			c = e[i].coloana;
	}
	l++; c++;
	int**m = new int*[l];
	for (int i = 0; i < l; i++) {
		m[i] = new int[c];
	}
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			m[i][j] = 0;
		}
	}
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < l; i++) {
			for (int j = 0; j < c; j++) {
				if ((e[k].linie == i) && (e[k].coloana == j))
					m[i][j] = e[k].valoare;
			}
		}
	}
	
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			cout << m[i][j];
		}
		cout << " " << endl;
	}
	return 0;
}
