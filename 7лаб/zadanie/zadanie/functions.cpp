#include <iostream>
#include <cctype>
#include "functions.h"
using namespace std;

//case1
void calculateASCIIDifference(const string& symbols) 
{
    for (char symbol : symbols) 
    {
        if (isalpha(symbol) && isascii(symbol)) 
        {
            char uppercaseSymbol = toupper(symbol);
            int uppercaseCode = static_cast<int>(uppercaseSymbol);
            int lowercaseCode = static_cast<int>(tolower(symbol));
            int difference = uppercaseCode - lowercaseCode;
            cout << "Разница значений кодов в ASCII для символа '" << symbol << "': " << difference << endl;
        }
        else 
        {
            cout << "Введен символ не латинского алфавита: '" << symbol << "'" << endl;
        }
    }
}

//case2
void calculateWindows1251Difference(const string& symbols) 
{
    for (char symbol : symbols) 
    {
        if (symbol >= static_cast<char>('А') && symbol <= static_cast <char>('я')) 
        {
            int uppercaseCode = toupper(symbol);
            int lowercaseCode = tolower(symbol);
            int difference = uppercaseCode-lowercaseCode;
            cout << "Разница между кодами символов в прописном и строчном написании для символа '" << symbol << "': " << difference << endl;
        }
        else 
        {
            cout << "Ошибка: Введен символ, не являющийся русской буквой Windows-1251: '" << symbol << "'" << endl;
        }
    }
}

//case3
void printSymbolCode(const string& symbols) 
{
    for (char symbol : symbols) 
    {
        if (isdigit(symbol)) 
        {
            int code = static_cast<int>(symbol);
            cout << "Код символа для цифры '" << symbol << "': " << code << endl;
        }
        else 
        {
            cout << "Введен символ не является цифрой: '" << symbol << "'" << endl;
        }
    }
}
