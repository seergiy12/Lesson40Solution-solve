// Задание 20: Добавьте прототип функции, которая принимает строку и символ
// и возвращает позицию символа в строке.

#include <iostream>
using namespace std;

string find_сhar(char str, char ch)

int main() {
    cout << find_сhar("Hello", 'e');
    return 0;
}

string find_сhar(string str, char ch) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch) {
            return i;
        }
    }
    return -1;
}
