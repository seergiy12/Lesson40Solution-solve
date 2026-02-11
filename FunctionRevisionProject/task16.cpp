// Задание 16: Добавьте прототип функции, которая принимает вещественное 
// и большое целое значения и возвращает их сумму.

#include <iostream>
using namespace std;

float sum(int n, long m)

int main()
{
    cout << sum(3.5f, 10000000000LL);
    return 0;
}

float sum(float n, long long m)
{
    return n+m;
}

