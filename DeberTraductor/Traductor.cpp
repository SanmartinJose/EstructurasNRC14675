#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <filesystem>

// Función para dividir una cadena en un vector de subcadenas utilizando un delimitador
std::vector<std::string> split(const std::string& s, char delimiter) {
    std::vector<std::string> tokens;
    std::stringstream ss(s);
    std::string token;
    while (std::getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

// Función para cargar las traducciones desde un archivo de texto
std::map<std::string, std::vector<std::string>> loadTranslationsFromFile(const std::string& filename) {
    std::map<std::string, std::vector<std::string>> dictionary;
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error al abrir el archivo " << filename << std::endl;
        std::cerr << "Intentando abrir el archivo desde la siguiente ruta: " << std::filesystem::absolute(filename) << std::endl; // Nueva línea agregada
        return dictionary;
    }

    std::string line;
    while (std::getline(file, line)) {
        // Dividir la línea en la palabra en español y sus traducciones
        std::vector<std::string> parts = split(line, ':');
        if (parts.size() == 2) {
            std::string spanishWord = parts[0];
            // Eliminar espacios en blanco al principio y al final de la palabra en español
            spanishWord.erase(std::remove_if(spanishWord.begin(), spanishWord.end(), ::isspace), spanishWord.end());

            std::vector<std::string> translations = split(parts[1], ',');
            // Eliminar espacios en blanco al principio y al final de cada traducción
            for (std::string& translation : translations) {
                translation.erase(std::remove_if(translation.begin(), translation.end(), ::isspace), translation.end());
            }

            dictionary[spanishWord] = translations;
        }
    }

    return dictionary;
}

// Función para traducir una palabra de español a inglés
std::vector<std::string> translateToEnglish(const std::string& spanishWord, const std::map<std::string, std::vector<std::string>>& dictionary) {
    std::string normalizedSpanishWord = spanishWord;
    std::transform(normalizedSpanishWord.begin(), normalizedSpanishWord.end(), normalizedSpanishWord.begin(), [](unsigned char c) { return std::tolower(c); });

    auto it = dictionary.find(normalizedSpanishWord);
    if (it != dictionary.end()) {
        return it->second; 
    } else {
        return {"Solo se pueden traducir palabras que se encuentren dentro del diccionario"}; 
    }
}

// Función para reproducir la traducción utilizando espeak
void speakTranslation(const std::vector<std::string>& translations) {
    for (const std::string& translation : translations) {
        std::string command = "espeak \"" + translation + "\"";
        std::system(command.c_str());
    }
}

int main() {
    // Cargar el diccionario español-inglés desde el archivo
    std::map<std::string, std::vector<std::string>> dictionary = loadTranslationsFromFile("/home/kibo/Desktop/DeberTraductor/translations.txt");

    // Loop principal para permitir al usuario traducir palabras repetidamente
    std::string spanishWord;
    while (true) {
        std::cout << "Ingrese una palabra en español (o 'q' para salir): ";
        std::getline(std::cin, spanishWord);

        if (spanishWord == "q") {
            break; 
        }

        std::vector<std::string> translations = translateToEnglish(spanishWord, dictionary);
        std::cout << "Traducciones: ";
        for (const std::string& translation : translations) {
            std::cout << translation << ", ";
        }
        std::cout << std::endl;

        speakTranslation(translations);
    }

    return EXIT_SUCCESS;
}
