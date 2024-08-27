//Ввести с клавиатуры целое положительное число.
// Напечатать его цифры через пробел в прямом порядке (без ведущих нулей).
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int  i;
  long long n;
  cin >> n;
  string nstr;
  while(n > 0) {
    nstr = char(n % 10 + '0') + nstr;
    n /= 10;
  }
  for(size_t i = 0; i < nstr.size() + 1; ++i) {
    cout << nstr[i] << " ";
  }

  return 0;
}
