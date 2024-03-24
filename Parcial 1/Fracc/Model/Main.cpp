#include "Fraccion.h"
#include "ValidationFraccion.h"
#include "OperacionesFraccion.h"
#include <iostream>

using namespace std;

int main() {
    // Programación tradicional
    Fraccion fraccion1(4, 3);
    Fraccion fraccion2(4, 5);
    Fraccion resultado = addFraccion(fraccion1, fraccion2);

    cout << "La suma de las fracciones es: " << resultado.getNumerator() << "/" << resultado.getDenominator() << std::endl;

    // Programación con funciones lambda
    auto addFraccionLambda = [](int a, int b, int c, int d) {
        int newNumerator = (a * d) + (c * b);
        int newDenominator = b * d;
        return newNumerator / newDenominator;
    };

    int a = 1;
    int b = 2;
    int c = 1;
    int d = 2;
    auto sumaFrac = addFraccionLambda(a, b, c, d);
    cout << "Suma: " << sumaFrac << endl;


    auto addFraccionLambdaConClaseFraccion=[](Fraccion& obj1,Fraccion& obj2){
        int newNumerator=(obj1.getNumerator()*obj2.getDenominator())+(obj2.getNumerator()*obj1.getDenominator());
        int newDenominator=obj1.getDenominator()*obj2.getDenominator();
        cout<<newNumerator<<" "<<newDenominator<<endl;
        return Fraccion(newNumerator,newDenominator);
    };
    Fraccion sumaFraccionConDatoFraccionLamda=addFraccionLambdaConClaseFraccion(fraccion1,fraccion2);
    cout << "La suma de las fracciones es con lambda es: " << sumaFraccionConDatoFraccionLamda.getNumerator() << "/" << sumaFraccionConDatoFraccionLamda.getDenominator() << std::endl;


    int valor1=sumaFraccionConDatoFraccionLamda.getNumerator();
    int valor2=sumaFraccionConDatoFraccionLamda.getDenominator();
    cout<<"Valor";
    cout<<valor1<<" "<<valor2<<endl;

    auto nuevoMetodoSumaFraccion=[valor1,valor2](Fraccion& obj1,Fraccion& obj2){
        //primera
        int newNumerator=(obj1.getNumerator()*obj2.getDenominator())+(obj2.getNumerator()*obj1.getDenominator());
        int newDenominator=obj1.getDenominator()*obj2.getDenominator();
        cout<<newNumerator<<" "<<newDenominator<<endl;
        //segunda
        int new2Numerator=((valor1*newDenominator)+(newNumerator*valor2));
        int new2Denominator=valor2*newDenominator;
        cout<<new2Numerator<<" "<<new2Denominator<<endl;



        return Fraccion(new2Numerator,new2Denominator);
    };
    Fraccion sumaFraccionConDatoFraccionLamda2=nuevoMetodoSumaFraccion(fraccion1,fraccion2);
    cout << "La suma de las fracciones es con lambda2 es: " << sumaFraccionConDatoFraccionLamda2.getNumerator() << "/" << sumaFraccionConDatoFraccionLamda.getDenominator() << std::endl;

    //USAR LAMBDA DESDE UN .H
    Fraccion resultado1=calc(fraccion1,fraccion2);
    cout << "La suma de las fracciones es: " << resultado1.getNumerator() << "/" << resultado1.getDenominator() << std::endl;

    return 0;
}
