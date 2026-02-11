// Задание 2: Объявите функцию `sum_large`, которая принимает небольшое 
// и большое целые числа и возвращает их сумму.

#include <iostream>
using namespace std;

long long sum_large(short n, long long m) {
    return n + m;
}

int main()
{
    cout << sum_large(100, 10000000000LL);
    return 0;
}