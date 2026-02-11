// Задание 25: Объявите функцию `factorial`, которая "вычисляет" 
// факториал целого числа.

#include <iostream>
using namespace std;

int factorial(int n) {
    int result;
    for (int i = 2; i <= n; i++) {
        i *= i;
    }
    return result;
}

int main() {
    cout << factorial(5);
    return 0;
}