//Ввести с клавиатуры целое число N (N>0). Написать функции fib_rec() и fib()
//для вычисления N-го числа Фибоначчи рекурсивным и нерекурсивным методом.
//Определить максимальное число N, для которого можно правильно вычислить результат, помещающийся в типе int.
// Числа Фибоначчи определяются следующим образом: f(1)=f (2)=1;f (n+2)=f (n)+f (n+1),вот начало этого ряда: 1,1,2,3,5,8,13…
#include <iostream>
#include <limits>

using namespace std;

// Рекурсивная функция для вычисления числа Фибоначчи
int fib_rec(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fib_rec(n - 1) + fib_rec(n - 2);
}

// Нерекурсивная функция для вычисления числа Фибоначчи
int fib(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    int a = 1, b = 1, c;
    for (int i = 3; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}


int findMaxFibInInt() {
    int a = 1, b = 1, c;
    int n = 2;
    while (true) {
        c = a + b;
        if (c < 0 || c > numeric_limits<int>::max() - b) {
            break;
        }
        a = b;
        b = c;
        n++;
    }
    return n;
}

int main() {
    int N;
    cin >> N;


    cout << "first: " << fib_rec(N) << endl;
    cout << "second:  " << fib(N) << endl;

    int maxN = findMaxFibInInt();
    cout << "max: " << maxN << endl;

    return 0;
}
