// Задание 18: Вызовите функцию `print_status`.

#include <iostream>
using namespace std;

bool print_status(string code, int success)
{
    cout << "Code: " << code << ", Success: " << (success ? "Yes" : "No");
}

int main()
{
    return 0;
}

