#include "Colas.h"
#include "Nodos.cpp"
#include "validaciones.h"
#include <random>
#include <iostream>

Cola::Cola(){
    cabeza = nullptr;
    cola = nullptr;
}

Nodo* Cola::getCabeza(){
    return cabeza;
}

void Cola::setCabeza(Nodo* cabeza){
    this->cabeza = cabeza;
}

Nodo* Cola::getCola(){
    return cola;
}

void Cola::setCola(Nodo* cola){
    this->cola = cola;
}

void Cola::insertar(int valor){
    Nodo* nuevo_nodo = new Nodo(valor, nullptr);
    if(cabeza == nullptr){
        cabeza = nuevo_nodo;
        cola = nuevo_nodo;
    }else{
        cola->setSiguiente(nuevo_nodo);
        cola = nuevo_nodo;
    }
}

void Cola::eliminar(){
    if(estaVacia()){
        printf("No existen nodos en la cola.\n");
    }else{
        Nodo* aux = cabeza->getSiguiente();
        cabeza->setSiguiente(nullptr);
        delete cabeza;
        cabeza = aux;
    }
}

void Cola::imprimir(){
    if(estaVacia()){
        printf("No existen nodos en la cola.\n");
    }else{
        Nodo* aux = cabeza;
        while(aux != nullptr){
            printf("%d", aux->getValor());
            printf("\t", 3);
            aux = aux->getSiguiente();
        }
    }
}

bool Cola::estaVacia(){
    if(cabeza == nullptr){
        return 1;
    }else{
        return 0;
    }
}

int Cola::sumaDeCola(){
    int resultado = 0;
    if(estaVacia()){
        printf("No existen nodos en la cola.\n");
    }else{
        Nodo* aux = cabeza;
        while(aux!=nullptr){
            resultado = resultado + aux->getValor();
            aux = aux->getSiguiente();
        }
    }
    return resultado;
}


void Cola::retornarColaPar(Cola* cola_par){
    if(estaVacia()){
        printf("No existen nodos en la cola.\n");
    }else{
        Nodo* aux = cabeza;
        while(aux!=nullptr){
            if(aux->getValor()%2 == 0){
                cola_par->insertar(aux->getValor());
            }
            aux = aux->getSiguiente();
        }
    }
}
void Cola::generarTablaCliente() {
    // Configuración para generar números aleatorios
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 30);

    // Generar el número aleatorio
    int numero_de_clientes = 25;
    int i, tiempo_de_llegada = 0;

    for (i = 0; i < numero_de_clientes; i++) {
        tiempo_de_llegada = tiempo_de_llegada + dis(gen);  // Generar tiempo de llegada aleatorio
        insertar(tiempo_de_llegada);  // Insertar cliente en la cola con el tiempo de llegada generado
    }
}

int Cola::maximo(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

void Cola::imprimirTabladeClientes() {
    int numeroDeClientes, tiempoEspera, noTrabajaCajero, tiempoEnServicio, tiempoEntreLlegada, saleCliente;
    numeroDeClientes = 1;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 20);

    if (estaVacia()) {
        std::cout << "No existen nodos en la cola." << std::endl;
    } else {
        Nodo* aux = cabeza;

        // Encontrar el ancho máximo para cada columna
        int max_ancho_tiempo_llegada = 0;
        int max_ancho_tiempo_espera = 0;
        int max_ancho_tiempo_trabaja_cajero = 0;
        int max_ancho_tiempo_servicio = 0;
        int max_ancho_tiempos_salida = 0;
        int max_ancho_tiempo_entre_llegadas = 0;

        while (aux != nullptr) {
            tiempoEnServicio = dis(gen);  // Generar tiempo de servicio aleatorio
            tiempoEspera = 0;  // Debes calcularlo correctamente
            saleCliente = aux->getValor() + tiempoEspera + tiempoEnServicio;
            noTrabajaCajero = maximo(aux->getValor(), saleCliente) - saleCliente;
            tiempoEntreLlegada = aux->getValor();

            // Actualizar los anchos máximos
            max_ancho_tiempo_llegada = std::max(max_ancho_tiempo_llegada, static_cast<int>(std::to_string(aux->getValor()).length()));
            max_ancho_tiempo_espera = std::max(max_ancho_tiempo_espera, static_cast<int>(std::to_string(tiempoEspera).length()));
            max_ancho_tiempo_trabaja_cajero = std::max(max_ancho_tiempo_trabaja_cajero, static_cast<int>(std::to_string(noTrabajaCajero).length()));
            max_ancho_tiempo_servicio = std::max(max_ancho_tiempo_servicio, static_cast<int>(std::to_string(tiempoEnServicio).length()));
            max_ancho_tiempos_salida = std::max(max_ancho_tiempos_salida, static_cast<int>(std::to_string(saleCliente).length()));
            max_ancho_tiempo_entre_llegadas = std::max(max_ancho_tiempo_entre_llegadas, static_cast<int>(std::to_string(tiempoEntreLlegada).length()));

            numeroDeClientes++;
            aux = aux->getSiguiente();
        }

        aux = cabeza;
        // Imprimir la cabecera de la tabla
        std::cout << "Cliente      Tiempo de llegada      Tiempo de espera      Tiempo no trabaja el cajero      Tiempo de servicio      Tiempos de salida      Tiempo entre llegadas\n";

        while (aux != nullptr) {
            tiempoEnServicio = dis(gen);  // Generar tiempo de servicio aleatorio
            tiempoEspera = 0;  // Debes calcularlo correctamente
            saleCliente = aux->getValor() + tiempoEspera + tiempoEnServicio;
            noTrabajaCajero = maximo(aux->getValor(), saleCliente) - saleCliente;
            tiempoEntreLlegada = aux->getValor();

            // Imprimir la fila de la tabla
            std::cout << numeroDeClientes << std::string(12 - std::to_string(numeroDeClientes).length(), ' ');  // Cliente
            std::cout << aux->getValor() << std::string(max_ancho_tiempo_llegada - std::to_string(aux->getValor()).length() + 6, ' ');  // Tiempo de llegada
            std::cout << tiempoEspera << std::string(max_ancho_tiempo_espera - std::to_string(tiempoEspera).length() + 6, ' ');  // Tiempo de espera
            std::cout << noTrabajaCajero << std::string(max_ancho_tiempo_trabaja_cajero - std::to_string(noTrabajaCajero).length() + 6, ' ');  // Tiempo no trabaja el cajero
            std::cout << tiempoEnServicio << std::string(max_ancho_tiempo_servicio - std::to_string(tiempoEnServicio).length() + 6, ' ');  // Tiempo de servicio
            std::cout << saleCliente << std::string(max_ancho_tiempos_salida - std::to_string(saleCliente).length() + 6, ' ');  // Tiempos de salida
            std::cout << tiempoEntreLlegada << std::string(max_ancho_tiempo_entre_llegadas - std::to_string(tiempoEntreLlegada).length() + 6, ' ') << std::endl;  // Tiempo entre llegadas

            numeroDeClientes++;
            aux = aux->getSiguiente();
        }
    }
}
