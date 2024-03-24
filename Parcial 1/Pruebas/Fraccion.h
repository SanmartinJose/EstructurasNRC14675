class Fraccion{
public:
	int getNumerador();
	void setNumerador(int newNumerador);
	int getDenominador();
	void setDenominador(int newDenominador);
	Fraccion(int num, int den);
	~Fraccion();
private:
	int numerador;
	int denominador;

};