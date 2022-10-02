#ifndef EQUACAO_H
#define EQUACAO_H
class Equacao {
private:
	double a, b, c, raiz;
public:
	Equacao();
	void setA(double);
	double getA()const;

	void setB(double);
	double getB()const;

	void setC(double);
	double getC()const;

	void setRaiz(double);
	double getRaiz()const;

	double getXI()const;

	double getXII()const;

};

#endif