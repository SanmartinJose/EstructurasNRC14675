#include "Cola.h"
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

void Cola::generarTabla(){
    
    
    
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 30);

    // Generar el número aleatorio
    int numero_de_clientes = 30;
    int i, tiempo_de_llegada=0;

    for (i=0;i<numero_de_clientes;i++){

            tiempo_de_llegada=tiempo_de_llegada+dis(gen);
            insertar(tiempo_de_llegada);
    }
}

int Cola::maximo(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}


void Cola::imprimirTabla(){
 

    int cantidad_de_clientes, tiempo_de_espera, tiempo_no_trabaja_el_cajero, tiempo_de_servicio, tiempo_entre_llegadas, tiempos_de_salida; 
    cantidad_de_clientes=1;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 20);


    if(estaVacia()){
        printf("No existen nodos en la cola.\n");
    }else{

        Nodo* aux = cabeza;
            tiempo_de_servicio=dis(gen);
            tiempo_de_espera=0;
            tiempos_de_salida=aux->getValor()+tiempo_de_espera+tiempo_de_servicio;
            tiempo_no_trabaja_el_cajero=maximo(aux->getValor(),tiempos_de_salida)-tiempos_de_salida;
            tiempo_entre_llegadas=aux->getValor();
            std::cout<<"Cliente"<<"  "<<"Tiempo de llegada"<<"  "<<"tiempo de espera"<<"  "<<"tiempo no trabaja el cajero"<<"  "<<"tiempo de servicio"<<"  "<<"tiempos de salida"<<"  "<<"tiempo entre llegadas"<<"\n";
            std::cout<<cantidad_de_clientes<<"  "<<aux->getValor()<<"  "<<tiempo_de_espera<<"  "<<tiempo_no_trabaja_el_cajero<<"  "<<tiempo_de_servicio<<"  "<<tiempos_de_salida<<"  "<<tiempo_entre_llegadas<<"\n";
            cantidad_de_clientes++;
        while(aux != nullptr){

            tiempo_de_servicio=dis(gen);
            tiempo_de_espera=maximo(tiempos_de_salida, aux->getSiguiente()->getValor())-aux->getSiguiente()->getValor();
            tiempo_no_trabaja_el_cajero=maximo(aux->getSiguiente()->getValor(),tiempos_de_salida)-tiempos_de_salida;
            tiempos_de_salida=aux->getSiguiente()->getValor()+tiempo_de_espera+tiempo_de_servicio;
            tiempo_entre_llegadas=aux->getSiguiente()->getValor()-aux->getValor();
            std::cout<<cantidad_de_clientes<<"  "<<aux->getSiguiente()->getValor()<<"  "<<tiempo_de_espera<<"  "<<tiempo_no_trabaja_el_cajero<<"  "<<tiempo_de_servicio<<"  "<<tiempos_de_salida<<"  "<<tiempo_entre_llegadas<<"\n";
            aux = aux->getSiguiente();
            cantidad_de_clientes++;
        }
    }
    
}