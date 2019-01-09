#include "pch.h"
#include<iostream>
using namespace std;
struct numar {
	int numarator;
	int numitor;
};
int divbyzero(numar a) {
	if (a.numitor == 0)
		return 0;
	else return 1;
}
int simplificare(numar a) {
	for (int i = 2; i <= a.numarator; i++) {
		if (a.numarator%i == 0 && a.numitor%i == 0) {
			a.numarator /= i;
			a.numitor /= i;
			i--;
		}
	}
	cout << a.numarator << "/" << a.numitor;
	return 0;

}


numar operatie(numar a, numar b) {
	char o;
	numar s;
	cout << "spuneti operatia" << endl;
	cin >> o;
	switch (o) {
	case '+':
		int aux;
		aux = b.numitor;
			b.numitor *= a.numitor;
		b.numarator *= a.numitor;
		a.numitor *= aux;
		a.numarator *= aux;
		s.numarator = a.numarator + b.numarator;
		s.numitor = a.numitor;
		break;
	case '-':
		aux = b.numitor;
			b.numitor *= a.numitor;
		b.numarator *= a.numitor;
		a.numitor *= aux;
		a.numarator *= aux;
		s.numarator = a.numarator - b.numarator;
		s.numitor = a.numitor;
		break;
	case'*':
		a.numarator *= b.numarator;
		a.numitor *= b.numitor;
		s = a;
		break;
	case '/':
		aux = b.numarator;
		b.numarator = b.numitor;
		b.numitor = aux;
		a.numarator *= b.numarator;
		a.numitor *= b.numitor;
		s = a;
		break;
default:
		cout << "nu ati ales o operatie stiuta";
		return numar{ 0,0 };
		break;

	}
	return s;
}
int main(){
	numar c,a,b;
	cout << "introduceti numaratorul, apoi numitorul fiecarui numar pe rand" << endl;
	cin >> a.numarator >> a.numitor>>b.numarator>>b.numitor;
	if (divbyzero(a) == 0 || divbyzero(b) == 0) {
		cout << "eroare,ati impartit la 0" << endl;
		system("pause");
		return 0;
	}
	c = operatie(a, b);
	simplificare(c);
	system("pause");
	return 0;

}
