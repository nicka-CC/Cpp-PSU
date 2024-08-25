//Даны координаты точки A (x, y) и координаты левого верхнего (xl, yt) и правого нижнего (xr, yb) углов прямоугольника.
//Определить, принадлежит ли точка A прямоугольнику. Исходные данные ввести с клавиатуры. Все числа считать целыми.
#include <iostream>
using namespace std;
class Point {
private:
  int x,y;
public:
  void set() {
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
  }
  int get_x() {
    return x;
  }
  int get_y() {
    return y;
  }
};
int main() {
  Point A;
  A.set();
  Point First;
  First.set();
  Point Second;
  Second.set();
  if((First.get_x() <= A.get_x() && A.get_x() <= Second.get_x()) &&
      (First.get_y() <= A.get_y() && A.get_y() <= Second.get_y())) {
    cout << "YES!!!"<<endl;
  }else {
    cout << "NO!!"<<endl;
  }
  return 0;
}
