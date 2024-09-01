//Ввести с клавиатуры вещественные положительные числа a и ε.
//Необходимо найти квадратный корень из числа a с указанной точностью ε при помощи формулы Герона:  .
//Результат сравнить со значением, вычисленным библиотечной функцией sqrt().
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double a,e,xn,xn1 = 1;
  cin >> a;
  cin >> e;
  do {
    xn = xn1;
    xn1 = (xn + a/xn)/2;
  }while(fabs(xn1 - xn) >= e);
  cout << "xn =" << xn << "sqrt(a) ="<<sqrt(a)<<endl;
  return 0;
}

