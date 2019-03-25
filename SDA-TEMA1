#include <iostream>
#include<string.h>
using namespace std;
template <typename  T>
class Array {
private :
	int d;
	T*a;
public :
	Array(int s) {
		d = s;
		a = new T[s];
	}
	Array() {
		if (a) {
			free(a);
			a = NULL;
		}
	}
	T operator[](int i) {
		return a[i];
	}
	void setArray(int pos, T val) {
		a[pos] = val;
	}
	T suma() {
		T s;
		s = a[0];
		for (int i = 1; i < d; i++) {
			s = s+a[i];
		}
		return s;
	}
};
template<>
class Array<char> {
private:
	int d;
	char*a;
public:
	Array(int s) {
		d = s;
		a = new char[s + 1];
	}
	Array() {
		if (a) {
			free(a);
			a = NULL;
		}
	}
	char operator[](int i) {
		return a[i];
	}
	void setArray(int pos, char val) {
		a[pos] = val;
	}
	char*suma() {
		return a;
	}
};
int main() {
	int n, m, val_int;
	char c;
	cout << "dimensiunea tabloului de numere intregi este: ";
		cin >> n;
	Array<int> e((const int)n);
	cout<<endl << "dimensiunea tabloului de litere este: ";
	cin >> m;
	Array<char> l((const int)m);
	cout <<endl<< "citire tablou de numere: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "introduceti elementul " << i << endl;
		cin >> val_int;
		e.setArray(i, val_int);
	}
	cout << "suma elementelor introduse este: " << e.suma() << endl;
	cout << "citire tablou de caractere: " << endl;
	for (int i = 0; i < m; i++) {
		cout << "introduceti elementul " << i << endl;
		cin >> c;
		l.setArray(i, c);
	}
	cout << "suma elementelor este: ";
	for (int i = 0; i < m; i++) {
		cout << l.suma()[i];
	}
	system("pause");
	return 0;
}
