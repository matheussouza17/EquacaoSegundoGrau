#include<iostream>
#include<stdio.h>
#include <iomanip>
#include <cstdlib>
#include <string>
#include<cmath>
#include "bhaskara.h"

using namespace std;

Bhaskara::Bhaskara(){
}

void Bhaskara::eng() {
	double a, b, c,raiz;
	cout << "Digite valor de A:";
	cin >> a;
	obj.setA(a);

	cout << "Digite valor de B:";
	cin >> b;
	obj.setB(b);

	cout << "Digite valor de C:";
	cin >> c;
	obj.setC(c);

	raiz = sqrt(pow(b, 2) - (4 * a * c));
	obj.setRaiz(raiz);

	if (obj.getRaiz() > 0) {
		if (obj.getA() > 0) {
			cout << "Resultado:" << endl;
			cout << "XI: " << obj.getXI() << endl;
			cout << "XII: " << obj.getXII() << endl;

		}
		else {
			cout << "Equação não é de segundo garu!!" << endl;
		}
	}
	else {
		cout << "Raiz inválida!\nRaiz menor ou igual a zero!" << endl;
	}

}
