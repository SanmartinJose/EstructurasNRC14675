#include <iostream>
#include <vector>
#include "Fechas.cpp"
Fecha fecha;
int main() {
    Fecha fechaInicial(1, 1, 2023, 1); // Ejemplo: 1 de enero de 2023 (Lunes)
    int cantidadFechas = 10; // Número de fechas a generar después de la fecha inicial

    std::vector<Fecha> fechasGeneradas = CrearFechas(fechaInicial, cantidadFechas);



    return 0;
}