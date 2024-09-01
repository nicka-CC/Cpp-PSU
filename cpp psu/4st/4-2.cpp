//Вычислить и напечатать в виде таблицы значения функции, заданной с помощью ряда Тейлора,
//на интервале от xнач до xкон с шагом dx и точностью ε.
//Каждая строка таблицы должна содержать значение аргумента, значение функции и библиотечное значение.
// #include <cmath>
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>
using namespace std;

unsigned long factorial(int n) {
  if(n < 0) {
    return 0;
  }
  unsigned long result = 1;
  for(int i =1; i <= n; ++i) {
    result *= i;
  }
  return result;
}

int main() {
  double x, sum, n, xn, xk, dx, i,e;
  do {
  cin >> xn;
    cin >> xk;
  }while(xn >xk);
  cin >> dx;
  cin >>e;
  while(xn <= xk) {
    x = xn;
    sum =1;
    n = 1;
    i = 1;
    while((abs(pow(-x, 2*i))/ factorial(2*i+1))>e) {
    sum += (pow(-x, 2*i))/ factorial(2*i+1);
    i++;
    n++;
  }
    cout.precision(5);
    cout<<setw(10) << "x: " << xn << setw(10) << " f(x): " << sum << setw(40) << " количество членов: " << n << endl;
    xn += dx;
  }
  system("pause");
  return 0;
}