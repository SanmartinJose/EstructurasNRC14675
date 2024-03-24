class Nodo{
	private:
		int valor;
		Nodo* siguiente;
	public:
	int getValor();
	void setValor(int newValor);
	Nodo* getSiguiente();
	void setSiguiente(Nodo* newSiguiente);
	Nodo();
	Nodo(int valor, Nodo* siguiente);
	~Nodo();
}