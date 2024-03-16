// functions.cpp
#include <iostream>
#include <cctype>

#include "functions.h"
//case1
void calculateASCIIDifference(const std::string& symbols) {
    for (char symbol : symbols) {
        if (isalpha(symbol) && isascii(symbol)) {
            char uppercaseSymbol = toupper(symbol);
            int uppercaseCode = static_cast<int>(uppercaseSymbol);
            int lowercaseCode = static_cast<int>(tolower(symbol));
            int difference = uppercaseCode - lowercaseCode;
            std::cout << "Разница значений кодов в ASCII для символа '" << symbol << "': " << difference << std::endl;
        }
        else {
            std::cout << "Введен символ не латинского алфавита: '" << symbol << "'" << std::endl;
        }
    }
}
//case2
void calculateWindows1251Difference(const std::string& symbols) {
    for (char symbol : symbols) {
        if (symbol >= static_cast<char>('А') && symbol <= static_cast <char>('я')) {
            int uppercaseCode = toupper(symbol);
            int lowercaseCode = tolower(symbol);
            int difference = uppercaseCode-lowercaseCode;
            std::cout << "Разница между кодами символов в прописном и строчном написании для символа '" << symbol << "': " << difference << std::endl;
        }
        else {
            std::cout << "Ошибка: Введен символ, не являющийся русской буквой Windows-1251: '" << symbol << "'" << std::endl;
        }
    }
}
//case3
void printSymbolCode(const std::string& symbols) {
    for (char symbol : symbols) {
        if (isdigit(symbol)) {
            int code = static_cast<int>(symbol);
            std::cout << "Код символа для цифры '" << symbol << "': " << code << std::endl;
        }
        else {
            std::cout << "Введен символ не является цифрой: '" << symbol << "'" << std::endl;
        }
    }
}
