#include<iostream>
#include<stdio.h>
#include <iomanip>
#include <cstdlib>
#include <string>
#include<cmath>
#include "equacao.h"
using namespace std;



Equacao::Equacao()
{
}

void Equacao::setA(double aux) {
	a = aux;
}

double Equacao::getA() const {
	return a;
}

void Equacao::setB(double aux) {
	b = aux;
}


double Equacao::getB() const {
	return b;
}

void Equacao::setC(double aux) {
	c = aux;
}

double Equacao::getC() const {
	return c;
}


void Equacao::setRaiz(double aux){
	raiz = aux;
}

double Equacao::getRaiz() const {
	return raiz;
}

double Equacao::getXI() const {
	return ((-b) + (raiz)) / (2 * a);
}

double Equacao::getXII() const {
	return ((-b) - (raiz)) / (2 * a);
}
