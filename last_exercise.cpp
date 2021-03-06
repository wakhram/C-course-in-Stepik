/*
Напишите программу для вычисления целочисленного логарифма по основанию 2. На вход программе в первой строке подается число TT, далее следует TT строк с тестами. 
Каждый тест состоит из одного целого положительного числа a_i \lt 10^{9}a 
i^9<10 , для каждого a нужно вывести на отдельной строке такое наибольшее число pp, что 2^p \le a_i2 p≤a i. Гарантируется, что a_i \ge 1a 
i≥1 . При решении задачи вы можете определять любые вспомогательные функции, если они вам нужны, 
более того рекомендуется вынести вычисление логарифма в отдельную функцию.
Ограничения: библиотеку cmath (и math.h) использовать запрещено.
*/

#include <iostream>
// #include <vector>
using namespace std;

int log_func(int n)
    {
        int count = 0;
        do
        {
            n /= 2;
            count++;
        } while (n > 1);

        return count;
    }

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        cout << log_func(number);
        cout << endl;
    }
    return 0;
}