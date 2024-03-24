#include "Diccionario.h"


void Diccionario::cargarDesdeArchivo(const std::string& nombreArchivo) {
    std::ifstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        std::string palabra, traduccion;

        while (archivo >> palabra >> traduccion) {
            palabras[palabra].setPalabra(palabra);
            palabras[palabra].setTraduccion(traduccion);
        }
        archivo.close();
    } else {
        std::cerr << "Error al abrir el archivo: " << nombreArchivo << std::endl;
    }
}

void Diccionario::buscarPalabra(const std::string& palabra) {
    auto it = palabras.find(palabra);
    if (it != palabras.end()) {
        std::cout << "Palabra: " << it->second.getPalabra() << std::endl;
        std::cout << "Traducción: " << it->second.getTraduccion() << std::endl;
    } else {
        std::cout << "La palabra no existe en el diccionario." << std::endl;
        std::string respuesta;
        std::cout << "¿Desea agregar la palabra al diccionario? (S/N): ";
        std::cin >> respuesta;

        if (respuesta == "S" || respuesta == "s") {
            std::string traduccionNueva;
            std::cout << "Ingrese la traducción de la palabra: ";
            std::cin >> traduccionNueva;
            agregarPalabra(palabra, traduccionNueva);
            guardarEnArchivo("diccionario.txt");
            std::cout << "Palabra agregada correctamente." << std::endl;
        } else {
            std::cout << "Operación cancelada." << std::endl;
        }
    }
}

void Diccionario::agregarPalabra(const std::string& palabra, const std::string& traduccion) {
    palabras[palabra].setPalabra(palabra);
    palabras[palabra].setTraduccion(traduccion);
}

void Diccionario::guardarEnArchivo(const std::string& nombreArchivo) const {
    std::ofstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        for (const auto& par : palabras) {
            archivo << par.second.getPalabra() << " " << par.second.getTraduccion() << std::endl;
        }
        archivo.close();
    } else {
        std::cerr << "Error al abrir el archivo: " << nombreArchivo << std::endl;
    }
}

void Diccionario::mostrarMenu() const {
    std::cout << "1. Buscar palabra" << std::endl;
    std::cout << "2. Agregar palabra" << std::endl;
    std::cout << "3. Guardar y salir" << std::endl;
    std::cout << "Ingrese la opción: ";
}
