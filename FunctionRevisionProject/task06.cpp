// Задание 6: Добавьте параметры в функцию `concat`, чтобы она объединяла 
// символ и строку.

#include <iostream>
using namespace std;

string concat(char ch, char str)
{
    return "" + ch + str;
}

int main()
{
    cout << concat('A', "pple");
    return 0;
}

