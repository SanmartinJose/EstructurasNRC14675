#ifndef DICCIONARIO_H_INCLUDED
#define DICCIONARIO_H_INCLUDED
#include <iostream>
#include <fstream>
#include <string>
#include <map>

class Palabra {
public:
    std::string getPalabra() const { return palabra; }
    std::string getTraduccion() const { return traduccion; }
    void setPalabra(const std::string& nuevaPalabra) { palabra = nuevaPalabra; }
    void setTraduccion(const std::string& nuevaTraduccion) { traduccion = nuevaTraduccion; }

private:
    std::string palabra;
    std::string traduccion;
};

class Diccionario {
public:
    void cargarDesdeArchivo(const std::string& nombreArchivo);
    void buscarPalabra(const std::string& palabra);
    void agregarPalabra(const std::string& palabra, const std::string& traduccion);
    void guardarEnArchivo(const std::string& nombreArchivo) const;
    void mostrarMenu() const;

private:
    std::map<std::string, Palabra> palabras;
};


#endif // DICCIONARIO_H_INCLUDED
