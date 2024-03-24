class ListaSimple{
    private:
        struct Nodo{
            int dato;
            Nodo* siguiente;
        };
        Nodo* cabeza;
        Nodo* cola;


    public:
    ListaSimple();  
    void insertarAlInicio(int valor);
    void insertarAlFinal(int valor);
    void imprimirDesdeInicio();
    void imprimirDesdeFinal();
    int sumarPares();

};