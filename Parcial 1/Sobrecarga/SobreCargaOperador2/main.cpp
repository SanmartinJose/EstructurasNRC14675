#include <iostream>
#include "Word.h"

int main() {
    Word<std::string> myWord("holap");
    myWord - 1;
    std::cout << myWord.getWord() << std::endl;

    //Print the word on lowercase
    std::cout << myWord.printWord() << std::endl;
    //Print the word on uppercase
    std::cout << myWord.printWord('M') << std::endl;

    return 0;
}