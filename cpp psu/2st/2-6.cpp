//Ввести с клавиатуры коэффициенты квадратного уравнения a, b, c.
//Напечатать корни x1 и x2 или сообщение о том, что корней не существует.
//Обработать ситуацию, когда a = 0. Все числа  считать вещественными (double).
#include <complex>
#include <iostream>
using namespace std;
int main() {
  double a, b, c, D, x1, x2;
  cin >> a;
  cin >> b;
  cin >> c;
  if(a == 0) {
    cout << "x =" << c / b <<endl;
  }else {
    D = b * b - 4 * a * c;
  x1 = (-b + sqrt(D))/ (2 * a);
  x2 = (-b - sqrt(D))/ (2 * a);
   if ((x1 + x2 == -b / a) && (x1 * x2 == c / a)) {
     cout << "x1 =" << x1 << " x2 = " << x2 << endl;
   }else {
     cout << "No!";
   }
  }


  return 0;
}
