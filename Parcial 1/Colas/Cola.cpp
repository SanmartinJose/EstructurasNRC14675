#include "Cola.h"

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

Nodo* Cola::extraer_cabeza(){
    Nodo* aux = cabeza;
    cabeza = cabeza->getSiguiente();
    return aux;
}

void Cola::dejar_pares(Cola* colaPares){
    if(estaVacia()){
        printf("No es posible realizar esta accion, ingrese datos primero");
    }else{
        Nodo* aux = cabeza;
        while(aux!=nullptr){
            if(aux->getValor()%2==0){
                colaPares->insertar(aux->getValor());
            }
            aux=aux->getSiguiente();
        }
    }

}
void Cola::sumarPosPares(Nodo* aux){
    aux=cabeza;
    int pos=1;
    int suma=0;
    if(estaVacia()){
        printf("No es posible realizar esta operacion");
    }else{
        while(aux!=nullptr){
            if(pos%2==0){
               suma += aux->getValor();
            }
            aux=aux->getSiguiente();
            pos++;
                    }
        imprimir();
        printf("el resultado es: %d\n",suma);
    }
}
void Cola::encontrarValor(int dato){
    if(estaVacia()){
        printf("No se puede realizar esta operacion");
    }else{
        Nodo* aux= cabeza;
        while(cabeza!=nullptr){
            if(aux->getValor()==dato){
            printf("el dato se encuentra en la cola");

        }else{
            printf("No existe el dato");
        }
        aux=aux->getSiguiente();
        printf("El dato es: %d\n", aux);
    }
}
}