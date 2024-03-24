/***************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Nombres: Ruben Benavides, Jose San Martin
 * Fecha de creacion: 21/11/23 22:31
 * Fecha de modificacion:
 * Enunciado: Implementacion de la clase Word
 ***************************/

 /**
* @author Ruben Benavides
*/
#include <iostream>

template <typename T>
class Word {
private:
    T word;

public:
    Word(T firstWord) : word(firstWord) {}

    void setWord(T newWord) {
        word = newWord;
    }

    T getWord() const {
        return word;
    }

    void operator-(int x) {
        if (x > word.length()) {
            std::cout << "No se pueden eliminar más caracteres de los que tiene la palabra." << std::endl;
        } else {
            for (int i = 0; i < x; i++) {
                word.pop_back();
            }
        }
    }

    T printWord() const {
        return word;
    }

    T printWord(char x) const {
        T newWord = word;
        for (int i = 0; i < word.length(); i++) {
            newWord[i] = toupper(newWord[i]);
        }
        return newWord;
    }
};
