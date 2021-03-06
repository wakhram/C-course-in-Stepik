/*Напишите функцию power, реализующую возведение целого числа в неотрицательную целую степень. 
Функция power должна принимать на вход два целых числа и возвращать целое число (смотрите шаблон кода). 
При выполнении задания учтите, что функция обязательно должна называться power, функция ничего не должна читать со входа или выводить.

Требования к реализации: в этом задании вам нужно реализовать только функцию power. Вы можете определять вспомогательные функции, если они вам нужны. 
Реализовывать функции main не нужно.

Ограничения: библиотеку cmath (и math.h) использовать запрещено.*/

// определите только функцию power, где
//    x - число, которое нужно возвести в степень
//    p - степень, в которую нужно возвести x
//
#include <iostream>

using namespace std;

int power(int x, unsigned p) {
    int answer = x;
    if (p == 0) {
        return 1;
    }
    else if (p == 1) {
        return answer;
    }
    else {
        while (p > 1) {
            answer = answer*x;
            p--;
        }
        return answer;
    }
}

int main() {
    int x, p;
    cin >> x >> p;
    cout << power(x,p) << endl;
    return 0;
}