// Задание 5: Объявите функцию `divide`, которая принимает вещественные значения
// и возвращает их частное.

#include <iostream>
using namespace std;

double divide(int n, int m) {
    return n / m;
}

int main()
{
    cout << divide(10.5, 2.0f);
    return 0;
}