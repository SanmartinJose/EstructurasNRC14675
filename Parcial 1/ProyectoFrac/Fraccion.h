/***********************************************************************
 * Module:  Fraccion.h
 * Author:  joanc
 * Modified: martes, 14 de noviembre de 2023 06:45:04 p. m.
 * Purpose: Declaration of the class Fraccion
 ***********************************************************************/



class Fraccion
{
public:
   int getDenominador();
   void setDenominador(int newDenominador);
   int getNumerador();
   void setNumerador(int newNumerador);
   Fraccion(int num, int den);
   ~Fraccion();

protected:
private:
   int numerador;
   int denominador;


};


