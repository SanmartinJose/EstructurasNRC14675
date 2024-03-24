#include "Calculadora.h"

template <typename T>
T Calculadora<T>::sumar(T a, T b) {
    return a + b;
}

template <typename T>
T Calculadora<T>::sumar(T a, T b, T c) {
    return a + b + c;
}