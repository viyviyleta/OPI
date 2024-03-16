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
            std::cout << "������� �������� ����� � ASCII ��� ������� '" << symbol << "': " << difference << std::endl;
        }
        else {
            std::cout << "������ ������ �� ���������� ��������: '" << symbol << "'" << std::endl;
        }
    }
}
//case2
void calculateWindows1251Difference(const std::string& symbols) {
    for (char symbol : symbols) {
        if (symbol >= static_cast<char>('�') && symbol <= static_cast <char>('�')) {
            int uppercaseCode = toupper(symbol);
            int lowercaseCode = tolower(symbol);
            int difference = uppercaseCode-lowercaseCode;
            std::cout << "������� ����� ������ �������� � ��������� � �������� ��������� ��� ������� '" << symbol << "': " << difference << std::endl;
        }
        else {
            std::cout << "������: ������ ������, �� ���������� ������� ������ Windows-1251: '" << symbol << "'" << std::endl;
        }
    }
}
//case3
void printSymbolCode(const std::string& symbols) {
    for (char symbol : symbols) {
        if (isdigit(symbol)) {
            int code = static_cast<int>(symbol);
            std::cout << "��� ������� ��� ����� '" << symbol << "': " << code << std::endl;
        }
        else {
            std::cout << "������ ������ �� �������� ������: '" << symbol << "'" << std::endl;
        }
    }
}
