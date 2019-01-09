#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	char o;
	float x1, y1, x2, y2, x3, y3, x4, y4, x5, y5;
		cout << "introduceti coordonatele oraselor :" << endl;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5;
	float  gata = 0, d=0, a1=x1, a2=x2;
	cout << "introduceti ordinea oraselor, ele find notate cu numere de la 1 la 5 :  " << endl;
	while(!gata){
		cin >> o;
		switch (o)
		{
		case '1' :
			d = d + sqrt(pow(x1 - a1, 2) + pow(y1 - a2, 2));
				a1 = x1; a2 = y1;
			break;
		case '2' :
			d = d + sqrt(pow(x2 - a1, 2) + pow(y2 - a2, 2));
				a1 = x1; a2 = y2;
			break;
		case '3' :
			d = d + sqrt(pow(x3 - a1, 2) + pow(y3 - a2, 2));
				a1 = x3; a2 = y3;
			break;
		case '4' :
			d = d + sqrt(pow(x4 - a1, 2) + pow(y4 - a2, 2));
				a1 = x4; a2 = y4;
			break;
		case '5':
			d = d + sqrt(pow(x5 - a1, 2) + pow(y5 - a2, 2));
				a1 = x5; a2 = y5;
			break;
		default:
			gata = 1;
			break;
		}
	}
	cout<<"distanta pe care o veti parcuge este: " << d << endl;
	system("pause");


	return 0;
}
