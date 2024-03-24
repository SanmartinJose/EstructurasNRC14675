#include "Cola.h"
#include "Cliente.cpp"

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

/*void Cola::insertar(int valor){
    Nodo* nuevo_nodo = new Nodo(valor, nullptr);
    if(cabeza == nullptr){
        cabeza = nuevo_nodo;
        cola = nuevo_nodo;
    }else{
        cola->setSiguiente(nuevo_nodo);
        cola = nuevo_nodo;
    }
}*/
void Cola::insertarCliente(Cliente cliente) {
    Nodo* nuevo_nodo = new Nodo(cliente, nullptr); // Creamos un nuevo nodo con el cliente dado

    if (cabeza == nullptr) { // Si la cola está vacía, el nuevo nodo será tanto la cabeza como la cola
        cabeza = nuevo_nodo;
        cola = nuevo_nodo;
    } else { // Si la cola no está vacía, añadimos el nuevo nodo al final y actualizamos la cola
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
        printf("No es posible");
    }else{
        Nodo* nodoActual=cabeza;
        bool repetido=false;
        while(nodoActual!=nullptr){
            if(nodoActual->getValor()==dato){
                printf("Dato repetido, no ingresado");
                repetido=true;
                break;
            }
            nodoActual=nodoActual->getSiguiente();
        }
        if(!repetido){
            insertar(dato);
            printf("\nSe agrego el numero correctamente");
            }
    }}
void Cola::noRepite(int dato){
    if(estaVacia()){
        printf("No hay");
    }else{
        Nodo* nodoActual=cabeza;
        bool repetido=false;
        while(nodoActual!=nullptr){
            if(nodoActual->getValor()==dato){
                printf("Dato repetido, no ingresado");
                repetido=true;
                break;
            }
            nodoActual=nodoActual->getSiguiente();
        }
        if(!repetido){
            insertar(dato);
            printf("\nSe agrego el numero correctamente");
            }
    }
}
