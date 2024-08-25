//График функции y = f(x) задан точками, соединенными прямыми отрезками.
//Вот эти точки: (–oo, 0),  (–2, 0),  (–1, –1),  (1, 1),  (2, 0),  (+oo, 0).
//Ввести с клавиатуры вещественное (double) значение x, напечатать соответствующее значение y.
#include <iostream>
using namespace std;
int main() {
  int x;
  cin >> x;
  if(x < -2) {
    cout << 0;
  }else if(x < -1) {
    cout << 0;
  }else if(x < 1){
    cout << -1;
  }else if(x<2){
  cout << 1;
  }else if(x >=2){  cout << 0;}

  return 0;
}
