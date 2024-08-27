//Написать программу вычисления x^n, где x – вещественное число, а n – произвольное целое число (в том числе и отрицательное).
// Значения x и n ввести с клавиатуры.
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double x;
  int n;
  cin >> x;
  cin >> n;
  double ot = 1;
  for(int i = 1; i < n + 1; ++i) {
    ot *= x;
  }
  cout << ot << endl;
  return 0;
}