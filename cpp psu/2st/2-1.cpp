//Даны длины трех отрезков a, b, c.
//Определить, можно ли из этих трех отрезков построить треугольник.
//Исходные данные ввести с клавиатуры. Все числа считать вещественными (double).
#include <iostream>
using namespace std;
int main() {
  double a,b,c;
  cout << "Enter a:" << endl;
  cin >> a;
  cout << "Enter b:" << endl;
  cin >> b;
  cout << "Enter c:" << endl;
  cin >> c;
  if ((c < a + b) & (a < c + b) & (b < a + c)) {
    cout << "This is trgnk" << endl;
  }else {
    cout << "Bad" << endl;
  }
  return 0;
}
