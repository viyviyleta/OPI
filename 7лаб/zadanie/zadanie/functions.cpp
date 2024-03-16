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
            cout << "������� �������� ����� � ASCII ��� ������� '" << symbol << "': " << difference << endl;
        }
        else 
        {
            cout << "������ ������ �� ���������� ��������: '" << symbol << "'" << endl;
        }
    }
}

//case2
void calculateWindows1251Difference(const string& symbols) 
{
    for (char symbol : symbols) 
    {
        if (symbol >= static_cast<char>('�') && symbol <= static_cast <char>('�')) 
        {
            int uppercaseCode = toupper(symbol);
            int lowercaseCode = tolower(symbol);
            int difference = uppercaseCode-lowercaseCode;
            cout << "������� ����� ������ �������� � ��������� � �������� ��������� ��� ������� '" << symbol << "': " << difference << endl;
        }
        else 
        {
            cout << "������: ������ ������, �� ���������� ������� ������ Windows-1251: '" << symbol << "'" << endl;
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
            cout << "��� ������� ��� ����� '" << symbol << "': " << code << endl;
        }
        else 
        {
            cout << "������ ������ �� �������� ������: '" << symbol << "'" << endl;
        }
    }
}
