#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

class Cliente {
private:
    int numeroCliente;
    int tiempoLlegada;
    int tiempoEspera;
    int tiempoNoTrabajo;
    int tiempoServicio;
    int tiempoSalida;
    int tiempoEntreLlegadas;

public:
    Cliente(int num, int llegada, int espera, int no_trabajo, int servicio, int salida, int entre_llegadas);


    // Métodos getter para acceder a los campos de la clase
    int getNumeroCliente() const;
    int getTiempoLlegada() const;
    int getTiempoEspera() const;
    int getTiempoNoTrabajo() const;
    int getTiempoServicio() const;
    int getTiempoSalida() const;
    int getTiempoEntreLlegadas() const;
};

#endif // CLIENTE_H_INCLUDED
