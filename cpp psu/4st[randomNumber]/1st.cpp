#include <iostream>
#include <time.h>
using namespace std;

int main() {
    srand(time(NULL));
    int number;
    float num1,num2;
    cout << "Input num1:";
    cin >> num1;
    cout << "Input num2:";
    cin >> num2;
    char alg;
    cout << "Input alg:";
    cin >> alg;
    switch (alg) {
        case '+': cout << num1 + num2; break;
        case '-': cout << num1 - num2; break;
        case '*': cout << num1 * num2; break;
        case '/': cout << num1 / num2; break;
    }
    // int a,b,c;
    // c = a % b;
    // c += 5
    //диапазон случайного числа от 1 до 20
    // 1 + rand() % 20
    return 0;
}
