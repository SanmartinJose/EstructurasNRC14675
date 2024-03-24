#include "Cliente.h"

Cliente::Cliente(int num, int llegada, int espera, int no_trabajo, int servicio, int salida, int entre_llegadas) {
    this->numeroCliente = num;
    this->tiempoLlegada = llegada;
    this->tiempoEspera = espera;
    this->tiempoNoTrabajo = no_trabajo;
    this->tiempoServicio = servicio;
    this->tiempoSalida = salida;
    this->tiempoEntreLlegadas = entre_llegadas;
}
int Cliente::getNumeroCliente() const {
    return numeroCliente;
}

int Cliente::getTiempoLlegada() const {
    return tiempoLlegada;
}

int Cliente::getTiempoEspera() const {
    return tiempoEspera;
}

int Cliente::getTiempoNoTrabajo() const {
    return tiempoNoTrabajo;
}

int Cliente::getTiempoServicio() const {
    return tiempoServicio;
}

int Cliente::getTiempoSalida() const {
    return tiempoSalida;
}

int Cliente::getTiempoEntreLlegadas() const {
    return tiempoEntreLlegadas;
}
