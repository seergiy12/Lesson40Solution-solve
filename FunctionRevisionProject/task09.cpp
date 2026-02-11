// Задание 9: Добавьте прототип функции, которая принимает символ 
// и целое число и возвращает строку из повторяющихся символов.

#include <iostream>
using namespace std;

int main()
{
    cout << repeat_symbol('*', 5);
    return 0;
}

int repeat_symbol(int ch, int count)
{
    string result;
    for (int i = 0; i < count; i++)
    {
        result += ch;
    }
    return result;
}