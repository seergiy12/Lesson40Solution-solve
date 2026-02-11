// Задание 8: Вызовите функцию `check_positive` с аргументами `3.14f` и `true`.
#include <iostream>
using namespace std;

int check_positive(int num, int strict)
{
    return strict ? num > 0 : num >= 0;
}

int main()
{
    return 0;
}

