#include "Cola.h"
#include <iostream>

//obtiene el nodo de la cabeza o inicioPtr
Nodo* Cola::obtenerCabeza()
{
    return inicioPtr;
}

//verficar que la cola está vacia
bool Cola::estaVacia(){
    if (inicioPtr == nullptr && finalPtr == nullptr)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//constructor predeterminado
Cola::Cola(){
    inicioPtr = nullptr;
    finalPtr = nullptr;
}

//destructor predeterminado
Cola::~Cola(){
    while (!estaVacia())
    {
        saca();//saca el primer elemento
    }
    
}

//saca un elemento de la cola, siempre del inicio
void Cola::saca(){
    if (estaVacia())//la cola está vacia
    {
        printf("\n Error, la cola esta vacia\n");
        system("pause");
        return;
    }

    Nodo* aux = inicioPtr;//guarda el nodo
    inicioPtr = inicioPtr->get_siguiente();//obtiene el siguiente valor

    if (inicioPtr == nullptr)//la cola ha quedado vacia
    {
        finalPtr = nullptr;//actualiza el final a vacio
    }
    
    delete aux;//libera la memoria
    
    
}

//mete un elemento en la cola, siempre al final
void Cola::mete(int valor){
    Nodo* nuevoPtr = new Nodo(valor, nullptr);

    if (inicioPtr == nullptr)
    {
        inicioPtr = nuevoPtr;
        finalPtr = nuevoPtr;
    }else
    {
        finalPtr->set_siguiente(nuevoPtr);
        finalPtr = nuevoPtr;
    }
}

//muestra el primer dato de la cola
Nodo* Cola::nodoInicio()
{
    Nodo* aux = inicioPtr;
    if (inicioPtr==nullptr)//no hay inicio
    {
        printf("\nError, la cola esta vacia\n");
        system("pause");
    }
    inicioPtr = inicioPtr->get_siguiente();
    return aux;
    
}

//muestra el último dato de la cola
int Cola::nodoFinal()
{
    if (finalPtr==nullptr)
    {
        printf("\nError, la cola esta vacia\n");
        system("pause");
    }

    return finalPtr->get_valor();
    
}

void Cola::muestra()
{
    if (estaVacia())//la cola esta vacia
    {
        printf("\nError, la cola esta vacia\n");
    }else
    {
        Nodo* aux = inicioPtr;//auxiliar para no perder los datos
        printf("\n Los elementos de la cola son:\n");
        printf("NULL->> ");
        while (aux!=nullptr)
        {
            printf("%d --> ",aux->get_valor());
            aux = aux->get_siguiente();
        }
        printf("NULL");
    }
    
}

//deja solo los pares en la cola


int Cola::CantidadElementos()
{
    if (estaVacia())
    {
        printf("\nLa cola esta vacia. Cantidad de elementos: 0");
        return 0;
    }
    
    Nodo* aux = inicioPtr;
    int cont=0;

    while (aux != nullptr)
    {
        aux = aux->get_siguiente();
        cont++;
    }
    printf("\nExisten %d elementos en la cola", cont);
    return cont;
}

void Cola::sumaPosicionesPares()
{
    Nodo* aux = inicioPtr;
    int sumar = 0;
    int i = 1;
    while (aux != nullptr)
    {
        if (i % 2 == 0 )
        {
            sumar += aux->get_valor();
        }
        aux = aux->get_siguiente();
        i++;
    }

    muestra();
    printf("\nLa suma es: %d\n", sumar);
}

void Cola::sumaPosicionesParesNodo(Nodo* aux)
{
    aux = inicioPtr;
    int sumar = 0;
    int i = 1;
    while (aux != nullptr)
    {
        if (i % 2 == 0 )
        {
            sumar += aux->get_valor();
        }
        aux = aux->get_siguiente();
        i++;
    }

    muestra();
    printf("\nLa suma es: %d\n", sumar);
}

void Cola::dejarPares(Cola* colaPares)
{
    if (estaVacia())
    {
        printf("\nError, la cola está vacia");
    }else
    {
        Nodo* aux = inicioPtr;
        while (aux != nullptr)
        {
            if (aux->get_valor() %2 == 0)
            {
                int impar = aux->get_valor();
                colaPares->mete(impar);
            }
            aux = aux->get_siguiente();
            
        }
    }
    
}

//guarda las posiciones impares y lo imprime en otra cola
void Cola::dejarImpares(Cola* colaImpares)
{
    if (estaVacia())
    {
        printf("\nError, la cola está vacia");
    }else
    {
        Nodo* aux = inicioPtr;
        while (aux != nullptr)
        {
            if (aux->get_valor() %2 != 0)
            {
                int impar = aux->get_valor();
                colaImpares->mete(impar);
            }
            aux = aux->get_siguiente();
            
        }
    }
    
}

//busque un numero dentro de la cola
void Cola::numeroDentro(int dato)
{
    if (estaVacia())
    {
        printf("\nCola esta vacia");
    }else
    {
        Nodo* aux = inicioPtr;
        bool encontrado = false;// Variable para rastrear si se encontró el dato en la cola
        while (aux != nullptr)
        {
            
            if (aux->get_valor() == dato)
            {
                printf("\nEl dato %d se encuentra en la cola\n", aux->get_valor());
                encontrado = true;
                break;// Salir del bucle si se encuentra el dato
            }

            aux = aux->get_siguiente();
            
        }
        if (!encontrado)
        {
            printf("\nEl dato %d no esta en la cola\n",dato);
        }
    } 
}

//que a una cola saque los pares, y lo guarde en una nueva cola, y en esa nueva cola guardada sume la segunda cola
void Cola::sacaNParesYSuma(Cola* colaSumaPares)
{
    if (estaVacia())
    {
        printf("\nNo se ha agregado elementos a la lista");
    }else
    {
        Nodo* aux = inicioPtr;
        int sumaNuevaCola = 0;
        while (aux != nullptr)
        {
            if (aux->get_valor()%2 == 0)
            {
                colaSumaPares->mete(aux->get_valor());
                sumaNuevaCola += aux->get_valor();
            }
            aux = aux->get_siguiente();
        }
        printf("\nLa suma de la nueva cola es: %d\n", sumaNuevaCola);
    }
}
//sacar solo los valores del inicio y del final(en dos funciones xd)
void Cola::sacaPrimeroEnLista()
{
    if (estaVacia())
    {
        printf("\nNo se ha agregado elementos a la lista");
    }
    else
    {
        Nodo* aux = inicioPtr;
        printf("\nEl primer valor de la Fila es: %d\n", aux->get_valor());
    }

}
void Cola::sacaUltimoEnLista()
{
    if (estaVacia())
    {
        printf("\nNo se ha agregado elementos a la lista");
    }
    else
    {
        Nodo* aux = inicioPtr;
        while (aux != nullptr)
        {
            
            if (aux->get_siguiente() == nullptr)
            {
                printf("\nEl ultimo valor de la Lista es: %d ",aux->get_valor());
            }
            aux=aux->get_siguiente();
        }
    }
}

//que al ingresar no pueda repetir un numero

void Cola::ingresoSinRepetir(int dato)
{
    if (estaVacia())
    {
        printf("\nCola esta vacia");
    }else
    {
        Nodo* aux = inicioPtr;
        bool encontrado = false;// Variable para rastrear si se encontró el dato en la cola
        while (aux != nullptr)
        {
            
            if (aux->get_valor() == dato)
            {
                printf("\nEl dato %d se encuentra en la cola\n", aux->get_valor());
                printf("\nNo puede ingresar un numero repetido");
                encontrado = true;
                break;// Salir del bucle si se encuentra el dato
            }

            aux = aux->get_siguiente();
            
        }
        if (!encontrado)
        {
            mete(dato);
            printf("\nSe agrego el numero correctamente");
        }
    } 
}

int Cola::nodoMayor()
{
    if (estaVacia())
    {
        printf("\nCola esta vacia");
    }else
    {
        Nodo* aux = inicioPtr;
        bool encontrado = false;
         int mayor = aux->get_valor(); // Suponemos que el primer valor es el mayor inicialmente
        while (aux!= nullptr)
        {
            if (aux->get_valor() > mayor)
            {
                mayor = aux->get_valor(); // Actualizamos el valor mayor si encontramos uno más grande
            }
            
            aux=aux->get_siguiente();
        }
        if (!encontrado)
        {
            printf("hola");
        }
        return mayor;
    }
}

void Cola::fibonacci(int n)
{
    while (!estaVacia())
    {
        saca();
    }
    
    //limpia la cola si ya tiene elementos
    int a =0, b = 1;
    for (int i = 0; i < n; i++)
    {
        mete(a);
        int temp = a;
        a = b;
        b = temp+a;
    }
    
}

void Cola::elevaNVeces(int veces, Cola* Celevada)
{   
    if (estaVacia())
    {
        printf("\nCola esta vacia");
    }else
    {
        Nodo* aux = inicioPtr;
        while (aux!= nullptr)
        {
            
            int elevado=1;
            for (int i = 0; i < veces; i++)
            {
                elevado *=aux->get_valor();
            }
            Celevada->mete(elevado);
            aux = aux->get_siguiente();
            
            
        }
    }
}

void Cola::limpiar() {
    while (!estaVacia()) {
        saca();
    }
}

void Cola::factorial(Cola* colaFactorial)
{
    if (estaVacia())
    {
        printf("\nCola esta vacia");
    }else
    {
        Nodo* aux = inicioPtr;
        while (aux != nullptr)
        {
            int factorial = 1;
            for (int i = 1; i <= aux->get_valor(); i++)
            {
                factorial *= i;
            }
            colaFactorial->mete(factorial);
            aux = aux->get_siguiente();
            
        }
    }
    
    
}

int Recursivo(int n)
{
    if (n ==0)
    {
        n = 1;
    }
    else
    {
        n = n*Recursivo(n-1);
    }
    return n;
    
}
void Cola::factorialRecursivo(Cola* colaFRecursivo)
{
    if (estaVacia())
    {
        printf("\nCola esta vacia");
    }else
    {
        Nodo* aux = inicioPtr;
        while (aux != nullptr)
        {
            int valor=Recursivo(aux->get_valor());
            colaFRecursivo->mete(valor);
            aux = aux->get_siguiente();
        }
        
        
        
    }
    
}