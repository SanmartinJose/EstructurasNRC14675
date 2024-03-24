#include <iostream>
#include <vector>
#include "Fecha.h"

Fecha::Fecha(){

}

Fecha::Fecha(int nuevo_diaSemana,int nuevo_dia, int nuevo_mes, int nuevo_ano){
    diaSemana=nuevo_diaSemana;
    dia = nuevo_dia;
    mes = nuevo_mes;
    ano = nuevo_ano;
}

int Fecha::getDia(){
    return dia;
}

int Fecha::getMes(){
    return mes;
}

int Fecha::getAno(){
    return ano;
}
int Fecha::getDiaSemana(){
    return diaSemana;
}

void Fecha::setDia(int nuevo_dia){
    dia = nuevo_dia;
}

void Fecha::setMes(int nuevo_mes){
    mes = nuevo_mes;
}

void Fecha::setAno(int nuevo_ano){
    ano = nuevo_ano;
}
void Fecha::setDiaSemana(int nuevo_diaSemana){
    diaSemana=nuevo_diaSemana;
}

// Función para determinar si un año es bisiesto
bool esBisiesto(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Función para obtener el número de días de un mes
int diasEnMes(int month, int year) {
    if (month == 2) {
        return esBisiesto(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

// Función para avanzar un día y ajustar la fecha
void avanzarDia(Fecha* fecha) {
    int dia = fecha->getDia();
    int mes = fecha->getMes();
    int ano = fecha->getAno();

    int diasEnElMes = diasEnMes(mes, ano);

    if (dia == diasEnElMes) {
        if (mes == 12) {
            dia = 1;
            mes = 1;
            ano++;
        } else {
            dia = 1;
            mes++;
        }
    } else {
        dia++;
    }

    fecha->setDia(dia);
    fecha->setMes(mes);
    fecha->setAno(ano);
}

// Función para generar fechas mensuales a partir de una fecha inicial
void generarFechasRecursivo(Fecha* fecha, int numFechas, std::vector<Fecha>& fechasGeneradas) {
    if (numFechas <= 0) {
        return;
    }

    int diaSemana = fecha->getDiaSemana();
    if (diaSemana == 6) { // Sábado
        avanzarDia(fecha);
    } else if (diaSemana == 7) { // Domingo
        avanzarDia(fecha);
        avanzarDia(fecha); // Salta al siguiente lunes
    }

    fechasGeneradas.push_back(*fecha);
    generarFechasRecursivo(fecha, numFechas - 1, fechasGeneradas);
}

// Función de inicio que inicializa y llama a la función recursiva
std::vector<Fecha> CrearFechas(Fecha fechaInicial, int numFechas) {
    std::vector<Fecha> fechasGeneradas;
    fechasGeneradas.push_back(fechaInicial);

    generarFechasRecursivo(&fechaInicial, numFechas - 1, fechasGeneradas);

    return fechasGeneradas;
}

