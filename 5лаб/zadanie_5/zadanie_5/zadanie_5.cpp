#include <iostream> 
#include <clocale>
#include <cctype>
#include <Windows.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char symbol;
    int choice;

    while (true) {
        cout << "Выберите вариант использования:" << endl;
        cout << "1 - Определение разницы значений кодов в ASCII буквы в прописном и строчном написании" << endl;
        cout << "2 - Определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании" << endl;
        cout << "3 - Вывод в консоль кода символа, соответствующего введенной цифре" << endl;
        cout << "4 - Выход из программы" << endl;
        cout << "Ваш выбор: ";
        cin >> choice;

        switch (choice) {
        case 1:
            // Определение разницы значений кодов в ASCII буквы в прописном и строчном написании
            cout << "Введите символ: ";
            cin >> symbol;

            if (isalpha(symbol) && isascii(symbol)) {
                char uppercaseSymbol = toupper(symbol);
                int uppercaseCode = static_cast<int>(uppercaseSymbol);
                int lowercaseCode = static_cast<int>(tolower(symbol));
                int difference = uppercaseCode - lowercaseCode;
                cout << "Разница значений кодов в ASCII: " << difference << endl;
            }
            else {
                cout << "Введен символ не латинского алфавита." << endl;
            }
            break;

        case 2:
            // Определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании
            cout << "Введите символ: ";
            cin >> symbol;

            if (symbol >= static_cast<char>('А') && symbol <= static_cast <char>('я')) {
                int uppercaseCode = toupper(symbol);
                int lowercaseCode = tolower(symbol);
                int difference = abs(uppercaseCode - lowercaseCode);
                cout << "Разница между кодами символов в прописном и строчном написании: " << difference << endl;
            }
            else {
                cout << "Ошибка: Введен символ, не являющийся русской буквой Windows-1251." << endl;
            }
            break;

        case 3:
            // Вывод в консоль кода символа, соответствующего введенной цифре
            cout << "Введите цифру: ";
            cin >> symbol;

            if (isdigit(symbol)) {
                int code = static_cast<int>(symbol);
                cout << "Код символа: " << code << endl;
            }
            else {
                cout << "Введен символ не является цифрой." << endl;
            }
            break;

        case 4:
            // Выход из программы
            cout << "Программа завершена." << endl;
            return 0;

        default:
            cout << "Неверный выбор. Пожалуйста, выберите 1, 2, 3 или 4." << endl;
            break;
        } 
    }
   
    return 0;
}
