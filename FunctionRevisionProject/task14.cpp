// Задание 14: Объявите функцию `is_digit`, которая принимает символ 
// и булевское значение и возвращает истину, если символ является цифрой.

#include <iostream>
using namespace std;

int is_digit(bool b) {
    int s;
    if (b == 1 || b == 2 || b == 3 || b == 4 || b == 5 || b == 6 || b == 7 || b == 8|| b == 9 || b == 0) {
        return s;
    }
    else{
        return -1;
    }

    return s;
}

int main()
{
    cout << is_digit('5', true);
    return 0;
}